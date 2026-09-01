/* FUN_100cf848 @ 0x100cf848 */

undefined4 FUN_100cf848(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  puVar2 = (undefined4 *)FUN_10113464(DAT_100cf8f4,&local_20,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_1011ea48(local_20,0,0x30);
    puVar1 = local_20;
    *local_20 = param_1;
    local_20[1] = 0;
    local_20[10] = 0;
    local_20[0xb] = 0;
    local_20[2] = 0;
    local_1c = puVar2;
    iVar6 = FUN_10113464(DAT_100cf90c,&local_1c,0,0);
    if (iVar6 == 0) {
      FUN_1011ea48(local_1c,0,0x138);
      local_1c[3] = DAT_100cf91c;
      FUN_1013c954(local_1c + 0x38);
      local_1c[0x36] = 0;
      *local_1c = puVar1;
      *param_2 = local_1c + 2;
      return 0;
    }
    iVar6 = DAT_100cf8fc - DAT_100cf8f8;
    param_1 = (undefined4 *)*puVar1;
    uVar3 = DAT_100cf918;
    uVar4 = DAT_100cf914;
    uVar5 = DAT_100cf910;
  }
  else {
    iVar6 = DAT_100cf8fc - DAT_100cf8f8;
    uVar3 = DAT_100cf908;
    uVar4 = DAT_100cf904;
    uVar5 = DAT_100cf900;
  }
  FUN_100a5b78(uVar3 | iVar6 * 0x20 & 0xff00U,uVar4,uVar5,param_1);
  return 0xfffffff4;
}

