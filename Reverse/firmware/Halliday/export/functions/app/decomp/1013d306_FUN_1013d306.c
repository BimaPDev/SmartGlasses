/* FUN_1013d306 @ 0x1013d306 */

void FUN_1013d306(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((int)param_3 < 0) {
    FUN_10118dd8(param_1,param_4,&stack0x00000000);
  }
  else {
    uVar1 = FUN_10118d90(param_1,param_3,param_4,&stack0x00000000,param_1,&stack0x00000000,param_3);
    if ((-1 < (int)uVar1) && (param_3 <= uVar1)) {
      uVar4 = FUN_10068cd8();
      iVar3 = (int)((ulonglong)uVar4 >> 0x20);
      iVar2 = FUN_10119ba8((int)uVar4,(int)*(short *)(iVar3 + 0xe));
      if (iVar2 < 0) {
        *(ushort *)(iVar3 + 0xc) = *(ushort *)(iVar3 + 0xc) & 0xefff;
      }
      else {
        *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + iVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x1013d35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)0x1013d33b)();
      return;
    }
  }
  return;
}

