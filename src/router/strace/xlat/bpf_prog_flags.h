/* Generated by ./xlat/gen.sh from ./xlat/bpf_prog_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_F_STRICT_ALIGNMENT) || (defined(HAVE_DECL_BPF_F_STRICT_ALIGNMENT) && HAVE_DECL_BPF_F_STRICT_ALIGNMENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_STRICT_ALIGNMENT) == (1U), "BPF_F_STRICT_ALIGNMENT != 1U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_STRICT_ALIGNMENT 1U
#endif
#if defined(BPF_F_ANY_ALIGNMENT) || (defined(HAVE_DECL_BPF_F_ANY_ALIGNMENT) && HAVE_DECL_BPF_F_ANY_ALIGNMENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_ANY_ALIGNMENT) == ((1U << 1)), "BPF_F_ANY_ALIGNMENT != (1U << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_ANY_ALIGNMENT (1U << 1)
#endif
#if defined(BPF_F_TEST_RND_HI32) || (defined(HAVE_DECL_BPF_F_TEST_RND_HI32) && HAVE_DECL_BPF_F_TEST_RND_HI32)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_TEST_RND_HI32) == ((1U << 2)), "BPF_F_TEST_RND_HI32 != (1U << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_TEST_RND_HI32 (1U << 2)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_prog_flags in mpers mode

# else

static const struct xlat_data bpf_prog_flags_xdata[] = {
 XLAT(BPF_F_STRICT_ALIGNMENT),
 XLAT(BPF_F_ANY_ALIGNMENT),
 XLAT(BPF_F_TEST_RND_HI32),
};
static
const struct xlat bpf_prog_flags[1] = { {
 .data = bpf_prog_flags_xdata,
 .size = ARRAY_SIZE(bpf_prog_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
