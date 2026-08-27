/* FUN_2c4e2628 @ 0x2c4e2628 */

int FUN_2c4e2628(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  
  uVar2 = DAT_2c4e24c8;
  local_24 = *DAT_2c4e2468;
  piVar4 = (int *)FUN_2c4e05fc(DAT_2c4e246c,0,param_3,0);
  uVar1 = DAT_2c4e2470;
  if (piVar4 == (int *)0x0) {
    FUN_2c4e34f4(0xf477,10,1);
    FUN_2c4e0504(DAT_2c4e2478,0,0,0,uVar1,10,uVar2,0x1300,DAT_2c4e2474);
    iVar5 = 0;
    goto LAB_2c4e21de;
  }
  local_3c = DAT_2c4e247c;
  uStack_38 = 0;
  local_40 = param_1;
  iVar5 = (**(code **)(*piVar4 + 0x18))(piVar4,&local_40);
  if (iVar5 == 0) {
    FUN_2c4e34f4(0xf477,0x11,1);
    uVar7 = 0x11;
    uVar8 = DAT_2c4e2480;
LAB_2c4e2222:
    iVar5 = DAT_2c4e2484;
    FUN_2c4e0504(DAT_2c4e2478,0,0,0,uVar1,uVar7,uVar2,0x1300,uVar8,param_1);
  }
  else {
    iVar5 = FUN_2c4df914(piVar4);
    if (iVar5 == 0) {
      FUN_2c4e34f4(0xf477,0x12,1);
      uVar7 = 0x12;
      uVar8 = DAT_2c4e2488;
      goto LAB_2c4e2222;
    }
    iVar6 = (**(code **)(*piVar4 + 0x2c))(piVar4,&local_30,10);
    uVar9 = local_30;
    uVar3 = DAT_2c4e24cc;
    if (iVar6 == 10) {
      iVar5 = DAT_2c4e2604;
      if ((((local_30 != DAT_2c4e2494) && (iVar5 = DAT_2c4e2608, local_2c != DAT_2c4e2498)) &&
          (iVar5 = DAT_2c4e260c, local_30 != DAT_2c4e2498 + 0xe2edf2e9)) &&
         ((iVar5 = DAT_2c4e2610, local_30 != DAT_2c4e24cc &&
          (iVar5 = DAT_2c4e249c, local_2c != DAT_2c4e2498 + 0xeed1d7e3)))) {
        if (local_30 == DAT_2c4e2498 + 0xd8d9acbd) {
          if (local_2c != DAT_2c4e2498 + 0xe5e5d6e6) {
LAB_2c4e24d0:
            if (((~local_30 & 0xf0ff) == 0) && ((DAT_2c4e25e4 & ~local_2c) == 0)) {
              iVar5 = FUN_2c66c58e(param_1,0x2e);
              if (iVar5 == 0) {
                FUN_2c4e34f4(0xf477,0x40,1);
                uVar8 = 0x40;
LAB_2c4e250a:
                iVar5 = 0;
                FUN_2c4e0504(DAT_2c4e25ec,0,0,0,uVar1,uVar8,uVar2,0x1300,DAT_2c4e25e8,param_1);
                goto LAB_2c4e2234;
              }
            }
            else {
              iVar6 = FUN_2c66960c(&local_30,DAT_2c4e25f0,8);
              iVar5 = DAT_2c4e2618;
              if ((iVar6 == 0) ||
                 (((iVar5 = DAT_2c4e261c, (uVar9 & 0xff00) == 0x9c00 ||
                   (uVar9 = uVar9 & 0xff, iVar5 = DAT_2c4e2620, uVar9 == 0xad)) ||
                  (iVar5 = DAT_2c4e2624, uVar9 == 0x8e)))) goto LAB_2c4e2442;
              FUN_2c4e0504(DAT_2c4e25f8,1,0,0,uVar1,0x4f,uVar2,0x1300,DAT_2c4e25f4,param_1,&local_30
                          );
              FUN_2c4e0504(DAT_2c4e25f8,1,0,0,uVar1,0x50,uVar2,0x1300,DAT_2c4e2600,local_30,local_2c
                           ,local_28,DAT_2c4e25fc);
              iVar5 = FUN_2c66c58e(param_1,0x2e);
              if (iVar5 == 0) {
                FUN_2c4e34f4(0xf477,0x52,1);
                uVar8 = 0x52;
                goto LAB_2c4e250a;
              }
            }
LAB_2c4e25b4:
            iVar5 = iVar5 + 1;
          }
        }
        else {
          iVar5 = DAT_2c4e2614;
          if (local_30 != DAT_2c4e24a0) {
            if ((local_30 & 0xffffff) != DAT_2c4e24a4) goto LAB_2c4e24d0;
            iVar5 = (**(code **)(*piVar4 + 0x20))
                              (piVar4,(local_28 >> 8 & 0xff) +
                                      (local_2c >> 0x18) * 0x4000 +
                                      (local_2c >> 0x10 & 0xff) * 0x200000 +
                                      (local_28 & 0xff) * 0x80,1);
            if (iVar5 == 0) {
              FUN_2c4e34f4(0xf477,0x2c,1);
              FUN_2c4e0504(DAT_2c4e2478,0,0,0,uVar1,0x2c,uVar2,0x1300,DAT_2c4e24a8);
            }
            else {
              iVar5 = (**(code **)(*piVar4 + 0x2c))(piVar4,&local_34,4);
              if (iVar5 == 4) {
                iVar5 = DAT_2c4e2610;
                if ((local_34 == uVar3) ||
                   (iVar5 = DAT_2c4e24bc,
                   (local_34 >> 8 & 0xf0) + (local_34 & 0xff) * 0x100 == 0xfff0)) goto LAB_2c4e2442;
                FUN_2c4e0504(DAT_2c4e24b4,1,0,0,uVar1,0x38,uVar2,0x1300,DAT_2c4e24b0,param_1);
                iVar5 = FUN_2c66c58e(param_1,0x2e);
                if (iVar5 != 0) goto LAB_2c4e25b4;
                FUN_2c4e34f4(0xf477,0x3a,1);
                FUN_2c4e0504(DAT_2c4e2478,0,0,0,uVar1,0x3a,uVar2,0x1300,DAT_2c4e24b8,param_1);
              }
              else {
                FUN_2c4e34f4(0xf477,0x30,1);
                FUN_2c4e0504(DAT_2c4e2478,0,0,0,uVar1,0x30,uVar2,0x1300,DAT_2c4e24ac,iVar5,4);
              }
            }
            iVar5 = 0;
            goto LAB_2c4e2234;
          }
        }
      }
LAB_2c4e2442:
      FUN_2c4e0504(DAT_2c4e24c4,7,0,0,uVar1,0x55,uVar2,0x1300,DAT_2c4e24c0,iVar5,param_1);
    }
    else {
      FUN_2c4e34f4(0xf477,0x15,1);
      iVar5 = DAT_2c4e2490;
      FUN_2c4e0504(DAT_2c4e2478,0,0,0,uVar1,0x15,uVar2,0x1300,DAT_2c4e248c,param_1,iVar6);
    }
  }
LAB_2c4e2234:
  (**(code **)(*piVar4 + 4))(piVar4);
LAB_2c4e21de:
  if (*DAT_2c4e2468 == local_24) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

