local Movement = {}

local function moveTowards(x0, x1, dx)
	x0 = x0 + dx
	if dx > 0 and x0 >= x1 or dx < 0 and x0 <= x1 then
		return x1
	end
	return x0
end
Movement.moveTowards = moveTowards

local function moveTowardsPoint_Speed(x0, y0, x1, y1, speed)
	local distx, disty = x1-x0, y1-y0
	local dist = math.sqrt(distx*distx + disty*disty)
	if dist <= 0 then
		return x0, y0
	end
	local dx = distx * speed / dist
	local dy = disty * speed / dist
	return moveTowards(x0, x1, dx), moveTowards(y0, y1, dy)
end
Movement.moveTowardsPoint_Speed = moveTowardsPoint_Speed

local function moveTowardsPoint_Timer(x0, y0, x1, y1, timer)
	if timer <= 0 then
		return x0, y0
	end
	local distx, disty = x1-x0, y1-y0
	local dx = distx / timer
	local dy = disty / timer
	return moveTowards(x0, x1, dx), moveTowards(y0, y1, dy)
end
Movement.moveTowardsPoint_Timer = moveTowardsPoint_Timer

function Movement.getVelocity_speed(x0, y0, x1, y1, speed)
	local distx, disty = x1-x0, y1-y0
	local dist = math.sqrt(distx*distx + disty*disty)
	if dist <= speed then
		return distx, disty
	end
	return distx * speed / dist, disty * speed / dist
end

function Movement.getVelocity_time(x0, y0, x1, y1, time)
	local distx, disty = x1-x0, y1-y0
	if time < 1 then
		time = 1
	end
	return distx / time, disty / time
end

function Movement.getJumpStartVelAndAccelZ(x0, y0, x1, y1, jumppeak, groundspeed)
	local dist = math.dist(x0, y0, x1, y1)
	if dist <= 0 then
		return
	end
	local t = dist/groundspeed/2
	local velz = 2*jumppeak/t
	local accelz = -velz/t
	return velz, accelz
end

function Movement.getVelocityWithJump_speed(x0, y0, z0, x1, y1, z1, velz, speed)
	local height = z0 - z1
	local groundy0 = y0 + height
	local velx, groundvely = Movement.getVelocity_speed(x0, groundy0, x1, y1, speed)
	local vely = groundvely - velz
	return velx, vely
end

return Movement