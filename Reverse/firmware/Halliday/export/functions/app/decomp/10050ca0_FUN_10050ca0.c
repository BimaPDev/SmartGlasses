/* FUN_10050ca0 @ 0x10050ca0 */

int FUN_10050ca0(uint param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 local_14c;
  uint local_14b;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 auStack_128 [252];
  int local_2c;
  
  local_2c = *DAT_10050fac;
  iVar2 = FUN_1004f6cc();
  local_138 = 0;
  local_134 = (undefined1 *)0x0;
  local_130 = 0;
  uVar5 = (DAT_10050fb0 - DAT_10050fb4) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0x380031,DAT_10050fbc,DAT_10050fb8);
  if (iVar2 != 0) goto LAB_10050d08;
  FUN_100a5b78(uVar5 | 0x3a0011,DAT_10050fbc,DAT_10050fc0);
  iVar6 = -0xe;
  do {
    while( true ) {
      if (*DAT_10050fac == local_2c) {
        return iVar6;
      }
      FUN_1013cdc0();
LAB_10050d08:
      puVar7 = param_2;
      if (param_1 == 1) {
        puVar8 = (undefined1 *)(iVar2 + 0x108);
        iVar6 = FUN_1011ea10(puVar8);
        if (iVar6 != 0) {
          FUN_1011ea28(puVar8,DAT_10050fd0);
          puVar7 = puVar8;
        }
      }
      if (*(char *)(iVar2 + 0x44) != '\0') {
        FUN_10050a24(1);
      }
      iVar6 = 0;
      iVar4 = iVar2 + 0x44;
      FUN_1011ea48(iVar4,0,0x96);
      uVar3 = DAT_10050fc4;
      puVar9 = DAT_10051008;
      do {
        if (*(byte *)(puVar9 + 1) == param_1) {
          FUN_1011ea28(iVar4,uVar3);
          FUN_1011ea28(iVar4,*puVar9);
          uVar3 = DAT_10050fc4;
        }
        iVar6 = iVar6 + 1;
        puVar9 = puVar9 + 2;
      } while (iVar6 != 6);
      uVar3 = *(undefined4 *)(iVar2 + 0x38);
      puVar8 = puVar7;
      iVar6 = iVar4;
      FUN_100a5b78(uVar5 | 0x570035,DAT_10050fbc,DAT_10050fc8,param_1,param_2,puVar7,iVar4,uVar3);
      uVar12 = FUN_100a443c(DAT_10050fc4);
      iVar11 = (int)uVar12 << 10;
      param_2 = &local_14c;
      if ((*(uint *)(iVar2 + 0x38) >> 10) + 0x400 <= (uint)((int)uVar12 * 0x400)) break;
      FUN_100a5b78(uVar5 | 0x5f0032,DAT_10050fbc,DAT_10050fcc,iVar11,*(uint *)(iVar2 + 0x38),puVar8,
                   iVar6,uVar3);
      local_14c = 1;
      local_138 = CONCAT22(local_138._2_2_,0xc02);
      local_14b = 0;
      local_130 = CONCAT13(local_130._3_1_,5);
      iVar6 = -0x1c;
      local_134 = param_2;
      FUN_100506fc(&local_138);
    }
    iVar10 = iVar2 + 0x20;
    iVar6 = FUN_10113cfc(iVar10,(int)((ulonglong)uVar12 >> 0x20),10000,0);
    if (iVar6 != 0) {
      FUN_100a5b78(uVar5 | 0x6d0011,DAT_10050fbc,DAT_10050fd4);
    }
    iVar6 = FUN_1004108c(iVar4);
    if (iVar6 == 0) {
      FUN_100a5b78(uVar5 | 0x710031,DAT_10050fbc,DAT_10050fd8,iVar4);
      FUN_1006c1dc(iVar4);
    }
    FUN_1011ea28(iVar4,DAT_10050fdc);
    iVar6 = FUN_1011ea10(iVar4);
    *(int *)(iVar2 + 0xdc) = iVar6 + iVar4;
    FUN_1011ea28(iVar4,puVar7);
    uVar1 = DAT_10050fe0;
    uVar3 = DAT_10050fbc;
    local_144 = 0;
    uStack_140 = 0;
    local_13c = 0;
    *(char *)(iVar2 + 0xe1) = (char)param_1;
    FUN_100a5b78(uVar5 | 0x7f0031,uVar3,uVar1,iVar4);
    iVar6 = FUN_1004108c(iVar4);
    if (iVar6 == 0) {
      FUN_100a5b78(uVar5 | 0x830031,DAT_10050fbc,DAT_10050fe4,iVar4);
    }
    local_12c = 0;
    FUN_1011ea48(auStack_128,0,0xfc);
    FUN_10118a1c(&local_12c,0x100,DAT_10050fec,iVar4,DAT_10050fe8);
    iVar6 = FUN_1006c2a0(&local_12c);
    if (iVar6 == 0) {
      FUN_100a5b78(uVar5 | 0x8b0031,DAT_10050fbc,DAT_10050ff0,&local_12c);
    }
    FUN_1011ea28(iVar4,DAT_10050fe8);
    iVar6 = FUN_1006ba84(&local_144,iVar4,0x13);
    if (iVar6 < 0) {
      FUN_100a5b78(uVar5 | 0x960012,DAT_10050fbc,DAT_10051000,iVar4,iVar6);
      local_14b = 0;
    }
    else {
      FUN_1006bc30(&local_144);
      local_14b = 0;
      FUN_100a5b78(uVar5 | 0x940031,DAT_10050fbc,DAT_10050ff4,iVar4);
    }
    uVar13 = local_14b;
    FUN_100a5b78(uVar5 | 0x9a0033,DAT_10050fbc,DAT_10050ff8,iVar4,local_14b,iVar11);
    iVar6 = FUN_100a11ec(iVar4);
    *(int *)(iVar2 + 0x40) = iVar6;
    if (iVar6 == 0) {
      FUN_100a5b78(uVar5 | 0x9e0011,DAT_10050fbc,DAT_10050ffc,iVar4,uVar13,iVar11);
      iVar6 = 0xe;
LAB_10050f34:
      if (*(int *)(iVar2 + 0x40) != 0) {
        FUN_100a0a70();
        FUN_100a0b00(*(undefined4 *)(iVar2 + 0x40));
        *(undefined4 *)(iVar2 + 0x40) = 0;
      }
      FUN_100509fc(iVar10);
      local_14c = 0xff;
      local_14b = 0;
    }
    else {
      iVar6 = FUN_100a03c0(iVar6,2);
      if (iVar6 != 0) {
        FUN_100a0b00(*(undefined4 *)(iVar2 + 0x40));
        FUN_100a5b78(uVar5 | 0xa50011,DAT_10050fbc,DAT_10051004,iVar4,uVar13,iVar11);
        goto LAB_10050f34;
      }
      FUN_100509fc(iVar10);
      if (*(int *)(iVar2 + 0x38) == 0) {
        FUN_10113fd0();
      }
      else {
        FUN_101140ac(iVar2 + 0xe4);
      }
      FUN_1011aab8(0);
      FUN_10114dcc(*(undefined4 *)(iVar2 + 0x1c));
      local_14b = local_14b << 0x18 | (local_14b >> 8 & 0xff) << 0x10 |
                  (local_14b >> 0x10 & 0xff) << 8 | local_14b >> 0x18;
      local_14c = 0;
    }
    local_138 = CONCAT22(local_138._2_2_,0xc02);
    local_130 = CONCAT13(local_130._3_1_,5);
    local_134 = param_2;
    FUN_100506fc(&local_138);
  } while( true );
}

