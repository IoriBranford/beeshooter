local account = require "System.Account.Steam"
if account then return account end

local NullAccount = {}

function NullAccount.init() print("no account to init") end
function NullAccount.update() end
function NullAccount.quit() end

return NullAccount