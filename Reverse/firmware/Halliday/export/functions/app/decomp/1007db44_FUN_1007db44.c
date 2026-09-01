/* FUN_1007db44 @ 0x1007db44 */

undefined4 FUN_1007db44(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  
  iVar1 = *(int *)param_1[3];
  iVar2 = (uint)*(byte *)(iVar1 + 0xb) * (uint)*(ushort *)(iVar1 + 0xe);
  if ((param_2 < (uint)((int *)param_1[3])[0x7b0]) && (param_1[1] == 0)) {
    if ((1 < *(byte *)(*param_1 + 0x10)) &&
       (pcVar3 = *(code **)(*param_1 + 0xc), pcVar3 != (code *)0x0)) {
      (*pcVar3)(DAT_1007dbd8,DAT_1007dbd4,0x79);
    }
  }
  else if (param_2 < (uint)(iVar2 * 2)) {
    uVar4 = (uint)*(ushort *)(iVar1 + 0x10) * iVar2;
    if ((param_2 == 0) && (uVar4 < param_3 || uVar4 - param_3 == 0)) {
      FUN_100807bc(param_1,1);
      iVar1 = thunk_FUN_100808b4(param_1);
      if (iVar1 != 1) {
        return 0xffffffff;
      }
      thunk_FUN_10120f92(param_1);
      FUN_10121a00(param_1,0);
      FUN_1007ebf8(param_1);
    }
    else if (*(char *)(*param_1 + 7) != '\x01') {
      if (uVar4 <= param_3) {
        param_3 = uVar4;
      }
      FUN_1007e9e0(param_1,param_2,param_3,uVar4,param_4);
    }
  }
  return 0;
}

