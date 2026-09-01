/* FUN_10019438 @ 0x10019438 */

void FUN_10019438(undefined4 param_1,undefined2 param_2,undefined1 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_r8;
  undefined1 local_5c [3];
  undefined1 local_59;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined2 local_3c;
  int local_38;
  int local_34;
  int local_1c;
  
  iVar5 = DAT_10019468;
  iVar6 = *DAT_10019464;
  *(undefined1 *)(DAT_10019468 + 0x12) = param_3;
  *(undefined4 *)(iVar5 + 0xc) = param_1;
  *(undefined2 *)(iVar5 + 0x10) = param_2;
  if (*DAT_10019464 != iVar6) {
    FUN_1013cdc0();
  }
  piVar1 = DAT_10019308;
  local_1c = *DAT_10019304;
  uVar7 = (DAT_1001930c - DAT_10019310) * 0x20 & 0xff00;
  if ((*(byte *)(DAT_10019308 + 0x12) & 1) != 0) {
    unaff_r8 = *DAT_10019308;
    if (unaff_r8 == 0) goto LAB_10019182;
    uVar2 = uVar7 | 0x8c0000;
    uVar3 = DAT_1001931c;
    goto LAB_1001916a;
  }
  uVar2 = uVar7 | 0x870000;
  uVar3 = DAT_10019314;
LAB_10019152:
  uVar2 = uVar2 | 0x31;
LAB_1001916e:
  do {
    FUN_100a5b78(uVar2,DAT_10019318,uVar3);
    while( true ) {
      if (*DAT_10019304 == local_1c) {
        return;
      }
      FUN_1013cdc0();
LAB_10019182:
      if (piVar1[3] == 0) break;
      uVar3 = FUN_1012e06e(0x2a,3);
      uVar4 = FUN_1012e0a2(0x2a,3);
      iVar5 = FUN_100a166c(uVar3,uVar4);
      if (iVar5 == 0) {
        piVar1[1] = 0;
        goto LAB_100191b0;
      }
      iVar6 = FUN_100a03c0(iVar5,3);
      if (iVar6 != 0) goto code_r0x100191c6;
      piVar1[1] = iVar5;
      if (piVar1[2] == 0) {
        iVar5 = FUN_10018fa0();
        piVar1[2] = iVar5;
        if (iVar5 != 0) goto LAB_10019202;
        FUN_100a5b78(uVar7 | 0xa50011,DAT_10019318,DAT_10019328);
      }
      else {
LAB_10019202:
        FUN_1011ea48(local_5c,0,0x40);
        local_5c[0] = 2;
        local_59 = 1;
        local_44 = 10;
        local_43 = (undefined1)(short)piVar1[4];
        iVar5 = FUN_100e7474();
        if (iVar5 == 0) {
          local_42 = 0x2c;
        }
        else {
          local_42 = FUN_100e7474();
        }
        local_40 = *(undefined1 *)((int)piVar1 + 0x12);
        local_3f = 2;
        local_3c = FUN_100bc130(3);
        local_38 = piVar1[1];
        local_34 = piVar1[2];
        local_3e = 2;
        FUN_100a5b78(uVar7 | 0xb90031,DAT_10019318,DAT_1001932c,local_3c);
        iVar5 = FUN_100a96ac(local_5c);
        *piVar1 = iVar5;
        if (iVar5 != 0) {
          FUN_1011dbf4(DAT_10019334,0xffffffff);
          FUN_100e74e4(piVar1[2]);
          FUN_100e74c0(1);
          FUN_100a7954(3,1);
          FUN_100a9348(*piVar1);
          FUN_1001902c();
          *(undefined1 *)((int)piVar1 + 0x13) = 3;
          if (-1 < (int)((uint)*(byte *)(piVar1 + 0x12) << 0x1e)) {
            thunk_FUN_101146e4(DAT_1001933c,DAT_10019338);
          }
          FUN_1011dc0a(DAT_1001933c,1000);
          *(byte *)(piVar1 + 0x12) = *(byte *)(piVar1 + 0x12) | 2;
          FUN_10113e2c(DAT_10019334);
          uVar2 = uVar7 | 0xd70000;
          uVar3 = DAT_10019340;
          goto LAB_10019152;
        }
        FUN_100a5b78(uVar7 | 0xbd0011,DAT_10019318,DAT_10019330);
        FUN_100a0a70(piVar1[2]);
        FUN_100a0b00(piVar1[2]);
        piVar1[2] = 0;
      }
      FUN_100a0a70(piVar1[1]);
      FUN_100a0b00(piVar1[1]);
      piVar1[1] = 0;
    }
    uVar2 = uVar7 | 0x910000;
    uVar3 = DAT_10019320;
LAB_1001916a:
    uVar2 = uVar2 | 0x21;
  } while( true );
code_r0x100191c6:
  FUN_100a0b00(iVar5);
  piVar1[1] = unaff_r8;
LAB_100191b0:
  uVar2 = uVar7 | 0x980011;
  uVar3 = DAT_10019324;
  goto LAB_1001916e;
}

