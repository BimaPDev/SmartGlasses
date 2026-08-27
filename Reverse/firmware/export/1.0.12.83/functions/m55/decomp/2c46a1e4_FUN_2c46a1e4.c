/* FUN_2c46a1e4 @ 0x2c46a1e4 */

/* WARNING: Possible PIC construction at 0x2c46a26e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c46a272) */
/* WARNING: Removing unreachable block (ram,0x2c46a242) */
/* WARNING: Removing unreachable block (ram,0x2c46a248) */

undefined4 *
FUN_2c46a1e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 uVar6;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 **ppuVar9;
  undefined4 uVar10;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_1c = *puRam2c46a208;
  local_20 = &uStack_c;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_2c66ddf4(param_1,local_20,param_3,0);
  uVar10 = 0x2c46a207;
  FUN_2c6685ec(1);
  uVar8 = extraout_r1;
  uVar1 = extraout_r2;
  uVar2 = extraout_r3;
  ppuVar9 = &local_20;
  do {
    uVar7 = uVar2;
    uVar6 = uVar1;
    uVar5 = uVar8;
    ppuVar9[-1] = (undefined4 *)uVar10;
    ppuVar9[-2] = (undefined4 *)unaff_r8;
    ppuVar9[-3] = (undefined4 *)unaff_r7;
    ppuVar9[-4] = (undefined4 *)unaff_r6;
    ppuVar9[-5] = unaff_r5;
    ppuVar9[-6] = (undefined4 *)unaff_r4;
    puVar3 = (undefined4 *)FUN_2c6685b4(1,0x38);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[7] = uVar5;
      *puVar3 = 0;
      iVar4 = FUN_2c6685b4(0,0x10);
      puVar3[10] = iVar4;
      unaff_r5 = puVar3;
      if (iVar4 != 0) {
        uVar8 = *ppuVar9;
        puVar3[0xb] = uVar6;
        puVar3[0xc] = uVar7;
        puVar3[0xd] = uVar8;
        return puVar3;
      }
    }
    FUN_2c46a1e4(uRam2c46a260);
    ppuVar9[-7] = (undefined4 *)0x2c46a25f;
    ppuVar9[-8] = (undefined4 *)0x0;
    ppuVar9[-10] = (undefined4 *)DAT_2c46a278;
    uVar10 = 0x2c46a273;
    uVar8 = extraout_r1_00;
    uVar1 = extraout_r2_00;
    uVar2 = DAT_2c46a27c;
    unaff_r4 = DAT_2c46a278;
    unaff_r6 = uVar7;
    unaff_r7 = uVar6;
    unaff_r8 = uVar5;
    ppuVar9 = ppuVar9 + -10;
  } while( true );
}

