/* FUN_100c1380 @ 0x100c1380 */

void FUN_100c1380(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_1011dbf4(DAT_100c13b4,0xffffffff);
  *(undefined4 *)(param_1 + 0x10) = 0;
  piVar1 = DAT_100c13b8;
  iVar2 = param_1 + 0x10;
  if ((int *)DAT_100c13b8[1] == (int *)0x0) {
    *DAT_100c13b8 = iVar2;
    piVar1[1] = iVar2;
  }
  else {
    *(int *)DAT_100c13b8[1] = iVar2;
    piVar1[1] = iVar2;
  }
  FUN_1013243e(param_1 + 4);
  FUN_10113e2c(DAT_100c0ba0);
  return;
}

