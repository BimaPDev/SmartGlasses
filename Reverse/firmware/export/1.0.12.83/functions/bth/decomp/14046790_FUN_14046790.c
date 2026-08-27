/* FUN_14046790 @ 0x14046790 */

void FUN_14046790(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  uint uVar8;
  undefined1 auStack_34 [8];
  char local_2c;
  uint local_24;
  
  uVar7 = DAT_140468c8;
  local_24 = *DAT_140468cc;
  uVar8 = param_2;
  FUN_1402a6e8(4,0x12,DAT_140468d4,DAT_140468d0,DAT_140468c4,DAT_140468c8,param_2);
  if ((param_1 < 3) && (param_2 < 0x11)) {
    FUN_1403cdd0(auStack_34,0);
    if (local_2c == '\0') {
      FUN_1402a6e8(4,0x1a,DAT_140468d4,DAT_140468d0,DAT_140468dc,uVar7,param_2);
      uVar7 = extraout_r1_00;
    }
    else {
      iVar5 = FUN_1404a1b4(0);
      if (iVar5 == 0) {
        FUN_1402a6e8(4,0x21,DAT_140468d4,DAT_140468d0,DAT_140468e8,uVar7,uVar8);
        param_2 = 0xffffffff;
        uVar7 = extraout_r1_04;
      }
      else {
        uVar8 = param_2 & 0xff;
        if (param_1 == 1) {
          uVar6 = FUN_1404e2b8(uVar8);
          uVar4 = DAT_140468ec;
          uVar2 = DAT_140468d4;
          uVar1 = DAT_140468d0;
          *(char *)(iVar5 + 0x61) = (char)uVar6;
          FUN_1402a6e8(4,0x2a,uVar2,uVar1,uVar4,uVar7,1,uVar6,param_2);
          FUN_1404e334(0,uVar6);
          FUN_1404e2dc(0,uVar8);
          piVar3 = DAT_140468d8;
          *(undefined1 *)(iVar5 + 0x80) = 0xf;
          (**(code **)(*piVar3 + 0x24))();
          uVar7 = extraout_r1_01;
        }
        else if (param_1 == 2) {
          FUN_1404f580(*(undefined1 *)(iVar5 + 10),uVar8);
          (**(code **)(*DAT_140468d8 + 0x20))();
          uVar7 = extraout_r1;
        }
        else {
          FUN_1402a6e8(4,0x35,DAT_140468d4,DAT_140468d0,DAT_140468e4,uVar7,param_1);
          param_2 = 0xffffffff;
          uVar7 = extraout_r1_03;
        }
      }
    }
  }
  else {
    FUN_1402a6e8(4,0x15,DAT_140468d4,DAT_140468d0,DAT_140468e0,uVar7,param_1,param_2);
    param_2 = 0xffffffff;
    uVar7 = extraout_r1_02;
  }
  if ((*DAT_140468cc ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(param_2,uVar7,*DAT_140468cc ^ local_24,0);
}

