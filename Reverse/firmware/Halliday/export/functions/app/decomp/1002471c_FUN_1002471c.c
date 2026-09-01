/* FUN_1002471c @ 0x1002471c */

void FUN_1002471c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar6 = *DAT_10024990;
  iVar2 = FUN_1012437a();
  iVar3 = FUN_10124372(param_1);
  if (iVar2 == 7) {
LAB_1002473e:
    FUN_10094174(4,DAT_10024998,0x1e2,DAT_1002499c,DAT_10024994,*(undefined4 *)(iVar3 + 0x10));
    iVar8 = *DAT_100249a0;
    iVar4 = FUN_10124cb8(*(undefined4 *)(iVar8 + 0x1c),1);
    iVar2 = DAT_100249a8;
    if (iVar4 == 0) {
LAB_10024764:
      if (*DAT_10024990 == iVar6) {
        return;
      }
    }
    else {
      uVar7 = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(iVar8 + 0x204) = uVar7;
      *(char *)(iVar2 + 0x17) = (char)uVar7;
      (*(code *)*DAT_100249a4)(0x5d);
      *(undefined1 *)(iVar8 + 0x208) = 1;
      if (*DAT_10024990 == iVar6) goto LAB_100247ee;
    }
  }
  else if (iVar2 == 0xd) {
    iVar2 = FUN_100871bc(param_1);
    if (iVar2 == 10) goto LAB_1002473e;
    iVar2 = FUN_100871bc(param_1);
    if (iVar2 == 0x12) {
      iVar2 = *DAT_100249a0;
      iVar3 = FUN_10126fd2(*(undefined4 *)(iVar2 + 0x24));
      puVar1 = DAT_100249a4;
      if ((iVar3 == 0) ||
         (iVar3 = (*(code *)DAT_100249a4[3])(*(undefined4 *)(iVar2 + 0x14)), iVar3 == 0))
      goto LAB_10024764;
      iVar3 = (*(code *)puVar1[3])(*(undefined4 *)(iVar2 + 0x18));
      if (iVar3 == 0) {
        FUN_10023d9c();
        if (*DAT_10024990 == iVar6) {
          FUN_100245c4();
          return;
        }
      }
      else {
        uVar7 = FUN_10126fb4(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x204));
        uVar5 = FUN_10125790();
        FUN_10124c20(*(undefined4 *)(iVar2 + 0x18),1);
        FUN_101256e8(uVar7,7,0);
        FUN_10089c2c(*(undefined4 *)(iVar2 + 0x18),uVar7,0x14,0,0);
        FUN_1012566e(*(undefined4 *)(iVar2 + 0x18),uVar5);
        FUN_10125640(uVar7,DAT_100249ac);
        FUN_101255ce(*(undefined4 *)(iVar2 + 0x18),0xa0);
        FUN_1002efe4();
        FUN_1002eefc(*(undefined4 *)(iVar2 + 4));
        iVar3 = *DAT_10024990;
joined_r0x100248c8:
        if (iVar3 == iVar6) {
          uVar7 = 0;
LAB_10024864:
          FUN_100919e0(*(undefined4 *)(iVar2 + 0x24),0,uVar7);
          return;
        }
      }
    }
    else if (iVar2 == 0x11) {
      iVar2 = *DAT_100249a0;
      iVar3 = FUN_10126fd2(*(undefined4 *)(iVar2 + 0x24));
      puVar1 = DAT_100249a4;
      if ((iVar3 == 0) ||
         (iVar3 = (*(code *)DAT_100249a4[3])(*(undefined4 *)(iVar2 + 0x18)), iVar3 == 0))
      goto LAB_10024764;
      FUN_100a5b78((DAT_100249b4 - DAT_100249b0) * 0x20 & 0xff00U | 0xe30031,DAT_100249bc,
                   DAT_100249b8);
      iVar3 = (*(code *)puVar1[3])(*(undefined4 *)(iVar2 + 0x14));
      if (iVar3 == 0) {
        FUN_10023df0();
        FUN_100245c4();
        iVar3 = *DAT_10024990;
        goto joined_r0x100248c8;
      }
      uVar7 = FUN_10126fb4(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x204));
      uVar5 = FUN_10125790();
      FUN_10124c20(*(undefined4 *)(iVar2 + 0x14),1);
      FUN_1012566e(*(undefined4 *)(iVar2 + 0x14),uVar5);
      FUN_10089c2c(*(undefined4 *)(iVar2 + 0x14),uVar7,0x11,0,0);
      FUN_101256e8(*(undefined4 *)(iVar2 + 0x10),2,0,0);
      FUN_101256e8(*(undefined4 *)(iVar2 + 8),5,0,0);
      FUN_10125640(uVar7,DAT_100249ac);
      FUN_101255ce(*(undefined4 *)(iVar2 + 0x14),0);
      FUN_1002efe4();
      FUN_1002eefc(*(undefined4 *)(iVar2 + 8));
      FUN_1002eefc(*(undefined4 *)(iVar2 + 0x10));
      if (*DAT_10024990 == iVar6) {
        uVar7 = 1;
        goto LAB_10024864;
      }
    }
    else {
      if (iVar2 != 0x1b) goto LAB_10024764;
      if (*DAT_10024990 == iVar6) {
        FUN_10023f38();
        return;
      }
    }
  }
  else {
    if (iVar2 != 0xe) goto LAB_10024764;
    if (*DAT_10024990 == iVar6) {
      FUN_10086f50(*(undefined4 *)(*DAT_100249a0 + 0x20),0x1e,iVar3);
      return;
    }
  }
  FUN_1013cdc0();
LAB_100247ee:
  FUN_10052c38(2,0);
  return;
}

