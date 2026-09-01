/* FUN_100c0864 @ 0x100c0864 */

void FUN_100c0864(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auStack_24 [24];
  
  uVar1 = ((int)PTR_DAT_100c08b0 - (int)PTR_DAT_100c08b4) * 0x20 & 0xff00;
  if (param_1 == 1) {
    FUN_100c050c(param_2,auStack_24,0x12);
    FUN_100a5b78(DAT_100c08c0 | uVar1,PTR_s_auth_bond_deleted_100c08bc,DAT_100c08c4,auStack_24,1);
  }
  else {
    FUN_100a5b78(uVar1 | 0x1280011,PTR_s_auth_bond_deleted_100c08bc,
                 PTR_s_bond_deleted_id_identity_address_100c08b8);
  }
  return;
}

