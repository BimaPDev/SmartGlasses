/* FUN_1007912c @ 0x1007912c */

undefined4 FUN_1007912c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint extraout_r2;
  int iVar2;
  undefined8 uVar3;
  
  if (((((param_2 >> 0x1a & 6) == 0) &&
       (iVar2 = ((param_2 & 0x1fffffff) >> 0x1a) * 0x18,
       *(int *)(param_1 + 0x10) + iVar2 + 0x34 != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x10) + iVar2 + 0x34) != 0)) &&
     (uVar3 = FUN_1011fb6e(param_2,param_2,param_2 >> 0x17),
     param_2 = (uint)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0)) {
    uVar1 = 2;
    *(undefined4 *)((extraout_r2 & 7) * 4 + DAT_1007918c) = 0;
  }
  else {
    FUN_10119dc2(DAT_10079184,DAT_10079188,param_2);
    FUN_1011fb60(param_1);
    uVar1 = 0xfffffff2;
  }
  return uVar1;
}

