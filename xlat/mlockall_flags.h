/* Generated by ./xlat/gen.sh from ./xlat/mlockall_flags.in; do not edit. */

static const struct xlat mlockall_flags[] = {
#if defined(MCL_CURRENT) || (defined(HAVE_DECL_MCL_CURRENT) && HAVE_DECL_MCL_CURRENT)
	XLAT(MCL_CURRENT),
#endif
#if defined(MCL_FUTURE) || (defined(HAVE_DECL_MCL_FUTURE) && HAVE_DECL_MCL_FUTURE)
	XLAT(MCL_FUTURE),
#endif
	XLAT_END
};