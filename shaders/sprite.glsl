vec4 effect(vec4 color, Image texture, vec2 tc, vec2 sc) {
	vec4 c = color * Texel(texture, tc);
	if (c.a == 0)
		discard;
	return c;
}