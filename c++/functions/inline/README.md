# inline

`inline` keyword suggests that the function shuold be inlined.

NOTE : its not a command but request to compiler.

Inlining is a compiler optimization technique where the function call is REPLACED by inline function body.

rather than generating seperate function call instruction.
saves from context switching

Rules for func to be inline :

func should not have loops
func should not be recursive
func should not switch or goto
no static variables

inshort function should not be complex.