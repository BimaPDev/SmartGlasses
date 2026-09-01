/* FUN_1007e6ec @ 0x1007e6ec */

undefined4 FUN_1007e6ec(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined1 auStack_20 [4];
  int local_1c [2];
  
  piVar4 = (int *)param_1[3];
  iVar1 = FUN_101208f0(param_1,auStack_20,local_1c,*param_2,*(undefined2 *)(param_2 + 3));
  if (iVar1 == 1) {
    if ((3 < *(byte *)(*param_1 + 0x10)) &&
       (pcVar3 = *(code **)(*param_1 + 0xc), pcVar3 != (code *)0x0)) {
      (*pcVar3)(DAT_1007e748,DAT_1007e744,0x1de,local_1c[0]);
    }
    FUN_1012054e(param_1,(uint)*(ushort *)(*piVar4 + 0xe) * local_1c[0]);
    FUN_1007e054(param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0x1000;
  }
  return uVar2;
}

