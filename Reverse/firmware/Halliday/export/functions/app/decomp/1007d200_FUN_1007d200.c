/* FUN_1007d200 @ 0x1007d200 */

void FUN_1007d200(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  iVar4 = DAT_1007d4f8;
  if (*(char *)(DAT_1007d4f8 + 0x13f) != '\x01') {
    FUN_1007cbc4();
    *(undefined4 *)(iVar4 + 0x1c4) = 0;
    *(undefined4 *)(iVar4 + 0x1c8) = 0;
    *(undefined1 *)(iVar4 + 0x141) = 3;
    *(undefined1 *)(iVar4 + 0x1bc) = 0;
    goto LAB_1007d224;
  }
  iVar6 = param_1;
  if (*(char *)(DAT_1007d4f8 + 0x1e2) != '\0') {
    *(undefined1 *)(DAT_1007d4f8 + 0x1e2) = 0;
    uVar5 = FUN_1011fee8();
    iVar7 = DAT_1007d4fc;
    *(undefined4 *)(iVar4 + 0x1d8) = uVar5;
    FUN_100a5b78((DAT_1007d500 - iVar7) * 0x20 & 0xff00U | 0x2400031,
                 PTR_s_bat_charge_state_charge_1007d508,PTR_s_reset_charge_begin_time__0x_x_1007d504
                 ,uVar5);
  }
  if ((*(byte *)(iVar4 + 0x13c) & 0x10) == 0) {
    uVar10 = ((uint)*(ushort *)(iVar4 + 0x3a) * 1000) / 200;
LAB_1007d2e8:
    if (*(ushort *)(iVar4 + 0x158) < uVar10) {
      uVar9 = *(ushort *)(iVar4 + 0x158) + 1;
      *(short *)(iVar4 + 0x158) = (short)uVar9;
      if (((uVar9 & 0xffff) % 5 == 0) && (iVar6 = FUN_1007c388(), iVar6 != 2)) {
        FUN_1007d0d8();
      }
      if (((uint)*(ushort *)(iVar4 + 0x158) % 0x32 == 0) && (*(char *)(iVar4 + 0x2e) == '\x01')) {
        uVar2 = *(ushort *)(iVar4 + 0x32);
        iVar6 = FUN_1007b2e4();
        if ((0 < iVar6) && (uVar9 = FUN_1011feb0(), uVar2 <= uVar9)) {
          uVar5 = FUN_1011feb0(iVar6);
          FUN_100a5b78(DAT_1007d518 | (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00U,
                       PTR_s_bat_charge_state_charge_1007d508,DAT_1007d51c,(uint)uVar2,iVar6,uVar5);
          goto LAB_1007d366;
        }
      }
      if (uVar10 != *(ushort *)(iVar4 + 0x158)) {
        return;
      }
LAB_1007d224:
      FUN_1007cae0(3);
      return;
    }
    if (param_1 < 0) {
      return;
    }
    if ((*(byte *)(iVar4 + 0x13c) & 0x10) != 0) goto LAB_1007d298;
    if (((*(char *)(iVar4 + 0x146) == '\0') || (*(char *)(iVar4 + 0x1b6) == '\0')) ||
       (*(int *)(iVar4 + 0x1c8) == 0)) goto LAB_1007d49c;
    cVar1 = *(char *)(iVar4 + 0xb);
    iVar7 = FUN_1011fee8();
    if (DAT_1007d528 < (uint)(iVar7 - *(int *)(iVar4 + 0x1c8))) {
      uVar9 = (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00;
      uVar10 = DAT_1007d530;
      uVar5 = DAT_1007d52c;
LAB_1007d3f4:
      FUN_100a5b78(uVar10 | uVar9,PTR_s_bat_charge_state_charge_1007d508,uVar5);
      if ((int)((uint)*(byte *)(iVar4 + 0x13c) << 0x1b) < 0) goto LAB_1007d298;
      FUN_100a5b78(DAT_1007d534 | (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00U,
                   PTR_s_bat_charge_state_charge_1007d508,DAT_1007d538);
      if ((int)((uint)*(byte *)(iVar4 + 0x13e) << 0x1f) < 0) {
        uVar3 = *(undefined1 *)(iVar4 + 0x143);
      }
      else {
        uVar3 = *(undefined1 *)(iVar4 + 9);
      }
      FUN_1007cb20(uVar3);
      *(undefined2 *)(iVar4 + 0x158) = 0;
      bVar8 = *(byte *)(iVar4 + 0x13c) | 0x10;
    }
    else {
      if (cVar1 == '\0') {
        if (param_1 < (int)(uint)*(ushort *)(iVar4 + 0xc)) goto LAB_1007d49c;
        uVar9 = (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00;
        uVar10 = DAT_1007d540;
        uVar5 = DAT_1007d53c;
        goto LAB_1007d3f4;
      }
      if (cVar1 != '\x01') {
        if (((cVar1 != '\x02') || (param_1 < (int)(uint)*(ushort *)(iVar4 + 0xc))) ||
           (iVar7 = FUN_1007d008(), iVar7 == 0)) goto LAB_1007d49c;
        uVar9 = (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00;
        uVar10 = DAT_1007d550;
        uVar5 = DAT_1007d54c;
        goto LAB_1007d3f4;
      }
      iVar7 = FUN_1007d008();
      if (iVar7 != 0) {
        uVar9 = (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00;
        uVar10 = DAT_1007d548;
        uVar5 = DAT_1007d544;
        goto LAB_1007d3f4;
      }
LAB_1007d49c:
      if ((*(short *)(iVar4 + 0x36) != 0) &&
         (iVar6 = FUN_1011fee8(),
         (uint)*(ushort *)(iVar4 + 0x36) * 60000 < (uint)(iVar6 - *(int *)(iVar4 + 0x1d8)))) {
        FUN_100a5b78(DAT_1007d554 | (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00U,
                     PTR_s_bat_charge_state_charge_1007d508,DAT_1007d558);
LAB_1007d366:
        FUN_1007c4fc();
        uVar5 = FUN_1011fee8();
        *(undefined1 *)(iVar4 + 0x1e0) = 1;
        *(undefined4 *)(iVar4 + 0x1dc) = uVar5;
        *(undefined1 *)(iVar4 + 0x141) = 0;
        FUN_100a5b78(DAT_1007d524 | (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00U,
                     PTR_s_bat_charge_state_charge_1007d508,DAT_1007d520,uVar5);
        return;
      }
      if ((int)((uint)*(byte *)(iVar4 + 0x13e) << 0x1f) < 0) {
        uVar3 = *(undefined1 *)(iVar4 + 0x143);
      }
      else {
        uVar3 = *(undefined1 *)(iVar4 + 9);
      }
      FUN_1007cb20(uVar3);
      *(undefined2 *)(iVar4 + 0x158) = 0;
      bVar8 = *(byte *)(iVar4 + 0x13c) & 0xef;
    }
    *(byte *)(iVar4 + 0x13c) = bVar8;
  }
  else {
    uVar10 = ((uint)*(ushort *)(iVar4 + 0x3c) * 1000) / 200;
    if (uVar10 != 0) goto LAB_1007d2e8;
    FUN_100a5b78((DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00U | 0x2580031,
                 PTR_s_bat_charge_state_charge_1007d508,
                 PTR_s_no_need_continue__charge_full__1007d50c,DAT_1007d4fc,iVar6,param_2,param_3);
LAB_1007d298:
    uVar10 = (DAT_1007d500 - DAT_1007d4fc) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1007d510 | uVar10,PTR_s_bat_charge_state_charge_1007d508,DAT_1007d514,uVar10,
                 iVar6,param_2,param_3);
    *(undefined1 *)(iVar4 + 0x1d5) = 100;
    FUN_1007c4fc();
    if (*(code **)(iVar4 + 0x164) != (code *)0x0) {
      (**(code **)(iVar4 + 0x164))(6,0);
    }
    *(undefined1 *)(iVar4 + 0x140) = *(undefined1 *)(iVar4 + 0x13f);
    *(undefined1 *)(iVar4 + 0x141) = 5;
    *(undefined4 *)(iVar4 + 0x1c4) = 0;
    *(undefined4 *)(iVar4 + 0x1c8) = 0;
    *(undefined1 *)(iVar4 + 0x1bc) = 0;
  }
  return;
}

