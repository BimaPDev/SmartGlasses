/* FUN_14004f74 @ 0x14004f74 */

int FUN_14004f74(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 == -6)) {
    FUN_14003d48(param_1,*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x28));
    return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x28);
  }
  FUN_14003d48(param_1,0);
  return 0;
}

