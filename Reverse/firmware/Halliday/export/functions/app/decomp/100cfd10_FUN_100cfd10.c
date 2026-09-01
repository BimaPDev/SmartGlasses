/* FUN_100cfd10 @ 0x100cfd10 */

undefined4 FUN_100cfd10(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = FUN_100cf740();
  if (iVar1 != 0) {
    piVar4 = *(int **)(iVar1 + 0x28);
    if ((piVar4 != (int *)0x0) && (piVar2 = piVar4 + -0x4d, piVar2 != (int *)0x0)) {
      piVar4 = (int *)*piVar4;
      if (piVar4 != (int *)0x0) {
        piVar4 = piVar4 + -0x4d;
      }
      while( true ) {
        piVar5 = piVar4;
        if (param_3 + 1U <= (uint)*(ushort *)((int)piVar2 + 0x66)) {
          uVar3 = FUN_100cfa34(piVar2,param_2,param_3);
          return uVar3;
        }
        if (piVar5 == (int *)0x0) break;
        piVar2 = piVar5;
        piVar4 = (int *)0x0;
        if ((piVar5 != (int *)0xfffffecc) && (piVar4 = (int *)piVar5[0x4d], piVar4 != (int *)0x0)) {
          piVar4 = piVar4 + -0x4d;
        }
      }
    }
    FUN_100a5b78(DAT_100cfd84 | (DAT_100cfd80 - DAT_100cfd7c) * 0x20 & 0xff00U,DAT_100cfd8c,
                 DAT_100cfd88,param_3 + 1U,param_1);
  }
  return 0;
}

