/* FUN_14050a78 @ 0x14050a78 */

undefined4 FUN_14050a78(undefined1 param_1,uint param_2,uint *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24 [2];
  undefined4 local_1c;
  uint *local_18;
  undefined4 local_14;
  
  puVar1 = DAT_14050ad8;
  if (param_4 == 0) {
    local_24[0] = param_2;
    FUN_140e5148(*DAT_14050ad8,0xffffffff);
    uVar2 = *puVar1;
    uVar4 = *DAT_14050adc;
    uVar3 = DAT_14050ae0;
    if (0xffffff >= uVar4) {
      uVar3 = uVar4 + 1;
    }
    *DAT_14050adc = uVar3;
    if (0xffffff < uVar4) {
      uVar4 = 0x100000;
    }
    FUN_140e52d8(uVar2);
    local_18 = local_24;
    local_14 = CONCAT22(local_14._2_2_,4);
    local_24[0] = uVar4;
  }
  else {
    local_14 = CONCAT22(local_14._2_2_,(short)param_4);
    local_24[0] = param_2;
    local_18 = param_3;
  }
  local_1c = CONCAT31(local_1c._1_3_,param_1);
  FUN_140a49fc(local_1c,local_18,local_14);
  return 0;
}

