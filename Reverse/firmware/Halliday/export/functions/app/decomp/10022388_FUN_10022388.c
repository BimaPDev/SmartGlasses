/* FUN_10022388 @ 0x10022388 */

uint FUN_10022388(undefined1 *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *extraout_r1;
  undefined1 *puVar3;
  byte *unaff_r4;
  byte *pbVar4;
  undefined1 *unaff_r5;
  uint uVar5;
  int unaff_r8;
  uint unaff_r9;
  undefined1 *unaff_r10;
  undefined1 *puVar6;
  int local_30;
  int local_2c;
  
  puVar6 = DAT_100224d4;
  local_2c = *DAT_100224d0;
  if (param_1 == (undefined1 *)0x0) {
    uVar5 = 0xffffffff;
    puVar6 = unaff_r10;
    goto LAB_1002244c;
  }
  FUN_1011ea48(DAT_100224d4,0,0x28e,0);
  FUN_10021cec(puVar6);
  FUN_100a5b78(((int)PTR_DAT_100224dc - (int)PTR_DAT_100224d8) * 0x20 & 0xff00U | 0x1ac0033,
               PTR_s_appNotifyCfg_getAll_100224e0,PTR_s_appNotifyCfg_getAll_gNoteStyle___100224e4,
               *puVar6,puVar6[1],puVar6[2]);
  pbVar4 = param_1 + 3;
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  unaff_r9 = 3;
  param_1[2] = puVar6[2];
  uVar5 = 0;
  puVar3 = puVar6;
  unaff_r5 = puVar6;
  do {
    unaff_r8 = unaff_r9 + 1;
    if (((uVar5 & 0xff) < (uint)(byte)puVar6[2]) && (unaff_r4 = pbVar4, uVar5 != 5))
    goto LAB_1002245a;
    unaff_r9 = 0;
    unaff_r4 = pbVar4 + 1;
    *pbVar4 = puVar6[0x148];
    while( true ) {
      uVar5 = unaff_r8 + 1;
      if (((uint)(byte)puVar6[0x148] <= (unaff_r9 & 0xff)) || (unaff_r9 == 5)) break;
      unaff_r9 = unaff_r9 + 1;
      if (param_2 < (int)(uVar5 + (byte)unaff_r5[0x149])) {
        uVar5 = 0xfffffffc;
        goto LAB_1002244c;
      }
      *unaff_r4 = unaff_r5[0x149];
      FUN_1011ea40(unaff_r4 + 1,unaff_r5 + 0x14a,unaff_r5[0x149]);
      unaff_r4 = unaff_r4 + 1 + (byte)unaff_r5[0x149];
      unaff_r8 = unaff_r8 + (byte)unaff_r5[0x149] + 1;
      unaff_r5 = unaff_r5 + 0x41;
    }
    if ((int)uVar5 < param_2) {
      local_30 = 0;
      iVar2 = FUN_10022060(unaff_r4 + 1,PTR_s__NAND__SYSTEM_REMIND_CFG_100224e8,&local_30);
      puVar1 = PTR_s_appNotifyCfg_getAll_byteCnt___d__100224ec;
      if (-1 < iVar2) {
        uVar5 = uVar5 + local_30;
        *unaff_r4 = (byte)iVar2;
        FUN_10119dc2(puVar1,local_30,iVar2,uVar5);
      }
    }
LAB_1002244c:
    while( true ) {
      if (*DAT_100224d0 == local_2c) {
        return uVar5;
      }
      FUN_1013cdc0();
      puVar3 = extraout_r1;
LAB_1002245a:
      uVar5 = uVar5 + 1;
      unaff_r8 = unaff_r8 + (uint)(byte)puVar3[3];
      if (unaff_r8 <= param_2) break;
      uVar5 = 0xfffffffd;
    }
    *unaff_r4 = puVar3[3];
    FUN_1011ea40(unaff_r4 + 1,puVar3 + 4,puVar3[3]);
    pbVar4 = unaff_r4 + 1 + (byte)puVar3[3];
    unaff_r9 = unaff_r9 + (byte)puVar3[3] + 1;
    puVar3 = puVar3 + 0x41;
  } while( true );
}

