#include "pollen.h"

struct pollen_codegen_plugin {
    tmpl_ctx_t *ctx;
    /* This is the parent context structure. */
};

int pollen_codegen_sanity_check()
{
	return 0;
}

int pollen_codegen_init(tmpl_ctx_t ctx)
{
	char *path = config_codegen;

	if (ctx == NULL)
		return 1;

	/* TODO: get selected codegen plugin path
         * from config file.
         * Codegen is disabled if no plugin
         * was selected. */

	load_library(ctx, path);
	return 0;
}

int pollen_codegen_quit(tmpl_ctx_t ctx)
{
	return 0;
}
