/* FUN_14036ff8 @ 0x14036ff8 */

undefined4 FUN_14036ff8(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_2c;
  
  local_2c = *DAT_14037124;
  param_2 = param_2 >> 9;
  *DAT_14037128 = 1;
  iVar2 = FUN_14038c10(&local_48,0x1c,0);
  if (iVar2 != 0) {
    FUN_1402a6e8(4,0xfa,DAT_14037140,DAT_14037144,DAT_1403713c,DAT_14037138,0xfa,iVar2);
  }
  iVar2 = FUN_14028770(0x47,0);
  local_48 = (undefined1)iVar2;
  if (iVar2 == 0xff) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14037148);
  }
  *DAT_1403712c = local_48;
  local_34 = DAT_14037130;
  local_46 = 0x200;
  local_40 = 0x4702;
  local_3c = 0;
  local_47 = 1;
  local_3e = 0;
  local_44 = 0x3010202;
  if (param_2 != 0) {
    puVar3 = DAT_14037134;
    iVar2 = 1;
    do {
      while( true ) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        local_38 = param_1;
        if (iVar2 + -1 < (int)(param_2 - 1)) break;
        FUN_14028228(puVar3,&local_48,0,1);
        param_1 = param_1 + 0x800;
        bVar1 = (int)param_2 <= iVar2;
        puVar3 = puVar3 + 4;
        iVar2 = iVar2 + 1;
        if (bVar1) goto LAB_140370c2;
      }
      FUN_14028228(puVar3,&local_48,puVar3 + 4,0);
      param_1 = param_1 + 0x800;
      bVar1 = iVar2 < (int)param_2;
      puVar3 = puVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
LAB_140370c2:
  FUN_14028648(DAT_14037134,&local_48);
  local_4c = 0;
  do {
    local_4c = local_4c + 1;
  } while (local_4c < 5000);
  FUN_140293f8();
  if (*DAT_14037124 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return 1;
}

