/* FUN_14005918 @ 0x14005918 */

undefined4 FUN_14005918(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 == -0xf)) {
    FUN_14003bcc(param_1,*(undefined4 *)(param_1 + 0x34));
    return *(undefined4 *)(param_1 + 0x34);
  }
  FUN_14003bcc(param_1,0);
  return 0;
}

