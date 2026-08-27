/* FUN_1406fa5c @ 0x1406fa5c */

undefined4 FUN_1406fa5c(uint param_1,undefined1 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 == (int *)0x0) {
    return 0x40;
  }
  if ((*param_3 == 0) || (param_1 == 0)) {
    return 0x40;
  }
  for (piVar3 = *(int **)(DAT_1406fab0 + 0x10); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if (*(ushort *)((int)piVar3 + 10) == param_1) {
      return 0x43;
    }
  }
  iVar2 = FUN_14073fdc(0x10,0,param_3,0,param_4);
  uVar1 = DAT_1406fab4;
  if (iVar2 != 0) {
    *(short *)(iVar2 + 10) = (short)param_1;
    *(int **)(iVar2 + 4) = param_3;
    *(undefined1 *)(iVar2 + 0xc) = param_2;
    *(undefined2 *)(iVar2 + 8) = 0;
    FUN_140739f0(uVar1);
    return 0;
  }
  return 0x4b;
}

