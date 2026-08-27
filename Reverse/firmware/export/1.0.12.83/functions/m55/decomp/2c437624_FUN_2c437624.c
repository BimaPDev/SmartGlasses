/* FUN_2c437624 @ 0x2c437624 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c437624(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  char in_OV;
  
  *(uint *)(param_3 + 0x20) = unaff_r6;
  if (in_OV == '\0') {
    uVar2 = *(uint *)(param_3 & unaff_r6);
    if (unaff_r5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0x6e,0x2c437620);
      (*pcVar1)();
    }
  }
  else {
    _MasterStackPointer = param_2 + 0x59;
    _NMI = (uint)*(ushort *)(param_3 + 0x1c);
    _Reset = 0;
    uVar2 = (uint)*(ushort *)((param_1 + 2) * 0x100 + 0x12);
    software_hlt(0x31);
    _HardFault = unaff_r6;
    _MemManage = unaff_r7;
  }
  return CONCAT44(param_3,uVar2);
}

