/* FUN_140dc46a @ 0x140dc46a */

void FUN_140dc46a(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    FUN_140e058c(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  sVar1 = *(short *)(param_2 + 0xe);
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  piVar2 = DAT_140df8b4;
  *DAT_140df8b4 = 0;
  iVar3 = FUN_140e45d0((int)sVar1,param_3,param_4,param_4,param_4,unaff_r4,unaff_r5,unaff_lr);
  if ((iVar3 == -1) && (*piVar2 != 0)) {
    *param_1 = *piVar2;
  }
  return;
}

