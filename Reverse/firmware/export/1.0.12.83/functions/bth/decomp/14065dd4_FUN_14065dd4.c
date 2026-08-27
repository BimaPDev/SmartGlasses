/* FUN_14065dd4 @ 0x14065dd4 */

void FUN_14065dd4(ushort *param_1,undefined1 *param_2,ushort *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *extraout_r1;
  undefined1 *puVar4;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint local_24;
  
  puVar1 = DAT_14065ea8;
  local_24 = *DAT_14065ea4;
  if (param_4 == 2) {
    uVar2 = 0;
    puVar4 = (undefined1 *)(uint)*param_3;
    *param_1 = *param_3;
    *param_2 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else if (param_4 == 0x10) {
    local_34 = *DAT_14065ea8;
    uStack_30 = DAT_14065ea8[1];
    uStack_2c = DAT_14065ea8[2];
    local_28 = CONCAT22((short)((uint)DAT_14065ea8[3] >> 0x10),param_3[6]);
    iVar3 = FUN_140db784(&local_34,param_3,0x10);
    if (iVar3 == 0) {
      uVar2 = 0xe;
      iVar3 = 2;
      *param_2 = 0;
      param_3 = param_3 + 6;
    }
    else {
      local_28 = *(undefined4 *)(param_3 + 6);
      local_34 = *puVar1;
      uStack_30 = puVar1[1];
      uStack_2c = puVar1[2];
      iVar3 = FUN_140db784(&local_34,param_3,0x10);
      if (iVar3 == 0) {
        uVar2 = 0xc;
        iVar3 = 4;
        param_3 = param_3 + 6;
        *param_2 = 1;
      }
      else {
        uVar2 = 0;
        *param_2 = 2;
        iVar3 = 0x10;
      }
    }
    FUN_140e5278(param_1,param_3,iVar3);
    FUN_140e5658((int)param_1 + iVar3,0,uVar2);
    uVar2 = 0;
    puVar4 = extraout_r1;
  }
  else {
    uVar2 = 0x40;
    puVar4 = param_2;
  }
  if ((*DAT_14065ea4 ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar2,puVar4,*DAT_14065ea4 ^ local_24,0);
}

