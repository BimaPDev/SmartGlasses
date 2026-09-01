/* FUN_10086948 @ 0x10086948 */

undefined4 FUN_10086948(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [4];
  int local_38;
  undefined1 local_34;
  undefined1 auStack_2c [24];
  undefined4 local_14;
  
  local_38 = FUN_1005b8b8();
  if ((local_38 == 0) || (*(int *)(local_38 + 0x18) == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    FUN_1011ea48(auStack_3c,0,0x2c);
    FUN_1013ca1a(auStack_2c,0,1);
    local_34 = 0;
    local_14 = param_1;
    FUN_1013c96e(DAT_100869c0,auStack_3c);
    iVar1 = FUN_1011dbde(auStack_2c,0xffffffff);
    if (iVar1 == -0xb) {
      FUN_100a5b78(((int)PTR_DAT_100869c4 - (int)PTR_DAT_100869c8) * 0x20 & 0xff00U | 0xbc0011,
                   PTR_s__diskio_flush_cache_req_100869d0,PTR_s_timeout_10166ac0_0xb_100869cc);
      uVar2 = 0xfffffff5;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

