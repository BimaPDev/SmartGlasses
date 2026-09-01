/* FUN_10122ae4 @ 0x10122ae4 */

int FUN_10122ae4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10122656();
  if (iVar1 == 0) {
    if ((*param_1 == '\x03') && (param_1[4] == '\x01')) {
      FUN_101222e4(param_1 + 0x50,0,0x200,3,param_4);
      param_1[0x24e] = 'U';
      param_1[0x24f] = -0x56;
      param_1[0x50] = 'R';
      param_1[0x51] = 'R';
      param_1[0x53] = 'A';
      param_1[0x52] = 'a';
      param_1[0x236] = 'A';
      param_1[0x237] = 'a';
      param_1[0x234] = 'r';
      param_1[0x235] = 'r';
      FUN_101222b6(param_1 + 0x238,*(undefined4 *)(param_1 + 0x1c));
      FUN_101222b6(param_1 + 0x23c,*(undefined4 *)(param_1 + 0x18));
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x3c) + 1;
      FUN_1008630c(param_1[1],param_1 + 0x50,*(int *)(param_1 + 0x3c) + 1,1);
      param_1[4] = '\0';
    }
    iVar2 = FUN_10086338(param_1[1],0);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}

