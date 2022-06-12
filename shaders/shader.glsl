extern number pixelScale;
extern vec2 blurdirection;

extern vec2 curvaturefactor;
extern number curvaturefeatheredge;

extern number scanlinewidth;
extern number scanlinephase;
extern number scanlinethickness;
extern number scanlineopacity;

vec4 effect(vec4 color, Image texture, vec2 tc, vec2 sc) {
	//// to barrel coordinates
	//tc = tc * 2.0 - vec2(1.0);
	//// distort
	//tc += (tc.yx*tc.yx) * tc * (curvaturefactor - 1.0);
	//number mask = (1.0 - smoothstep(1.0-curvaturefeatheredge,1.0,abs(tc.x)))
	//            * (1.0 - smoothstep(1.0-curvaturefeatheredge,1.0,abs(tc.y)));
	//// to cartesian coordinates
	//tc = (tc + vec2(1.0)) / 2.0;

	vec4 c = Texel(texture, tc);
	vec2 delta = pixelScale * blurdirection;
	c += Texel(texture, tc - delta);
	c += Texel(texture, tc + delta);

	//number v = .5*(sin(tc.y * 3.14159 / scanlinewidth * love_ScreenSize.y + scanlinephase) + 1.);
	//c.rgb -= (-c.rgb) * (pow(v,scanlinethickness) - 1.0) * scanlineopacity;

	return //mask *
		color * c / 3.0;
}