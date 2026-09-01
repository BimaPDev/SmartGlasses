/* FUN_100c0584 @ 0x100c0584 */

void FUN_100c0584(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_34 [16];
  uint local_24 [2];
  int local_1c;
  
  iVar1 = FUN_10131bde(param_1,local_24);
  if ((-1 < iVar1) && ((local_24[0] & 0xff00ff) == 0x10001)) {
    FUN_1011ea48(auStack_34,0,0xd);
    FUN_10119cd2(local_1c + 1,6,auStack_34);
    FUN_100a5b78(((int)PTR_DAT_100c05e4 - (int)PTR_DAT_100c05e0) * 0x20 & 0xff00U | 0xfa0032,
                 PTR_s_auth_pairing_failed_100c05ec,PTR_s_dualble_addr__s_reason__d_100c05e8,
                 auStack_34,param_2);
  }
  return;
}

