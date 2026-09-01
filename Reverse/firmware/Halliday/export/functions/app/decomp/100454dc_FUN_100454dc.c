/* FUN_100454dc @ 0x100454dc */

void FUN_100454dc(code *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  undefined1 uVar8;
  uint uVar9;
  code *pcVar10;
  undefined4 local_34;
  undefined4 *local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_10045610;
  puVar1 = (undefined4 *)thunk_FUN_1009f30c(10,DAT_10045614,param_3,0);
  puVar3 = puVar1;
  if (puVar1 != (undefined4 *)0x0) goto LAB_10045524;
  FUN_100a5b78(DAT_10045620 | (DAT_1004561c - DAT_10045618) * 0x20 & 0xff00U,DAT_10045628,
               DAT_10045624);
  uVar2 = 0xfffffff4;
  do {
    if (*DAT_10045610 == local_24) {
      return;
    }
    puVar3 = (undefined4 *)FUN_1013cdc0(uVar2);
LAB_10045524:
    iVar4 = DAT_1004562c;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    if (param_1 == (code *)0x2) {
      *(undefined1 *)puVar3 = 5;
      local_28 = 0;
      iVar4 = (**(code **)(iVar4 + 0x38))(&local_28);
      if (iVar4 != 0) {
LAB_10045542:
        *(undefined1 *)((int)puVar1 + 1) = (undefined1)local_28;
        *(undefined1 *)((int)puVar1 + 2) = local_28._1_1_;
        *(undefined1 *)((int)puVar1 + 3) = local_28._2_1_;
        goto LAB_100455f2;
      }
      uVar7 = 1;
    }
    else {
      if (param_1 == (code *)0x6) {
        *(undefined1 *)puVar3 = 6;
LAB_1004558a:
        local_28 = 0;
        (**(code **)(iVar4 + 0x2c))(&local_28);
        goto LAB_10045542;
      }
      iVar5 = (**(code **)(iVar4 + 4))();
      iVar6 = DAT_10045630;
      pcVar10 = *(code **)(iVar4 + 0x24);
      uVar9 = (DAT_1004561c - DAT_10045618) * 0x20 & 0xff00;
      if (iVar5 == 0) {
        uVar8 = 0;
        if (param_1 == (code *)0x1) {
          iVar6 = (*pcVar10)();
          if (iVar6 != 0) goto LAB_10045602;
          goto LAB_100455c8;
        }
      }
      else {
        uVar2 = (**(code **)(DAT_10045630 + 8))();
        FUN_100a5b78(DAT_10045634 | uVar9,DAT_10045628,DAT_10045638,uVar2);
        iVar6 = (**(code **)(iVar6 + 8))();
        if (iVar6 == 0x6e) {
LAB_10045602:
          uVar8 = 2;
        }
        else {
LAB_100455c8:
          uVar8 = 1;
        }
      }
      param_1 = *(code **)(iVar4 + 0x1c);
      uVar2 = (*param_1)();
      FUN_100a5b78(DAT_1004563c | uVar9,DAT_10045628,DAT_10045640,uVar2);
      iVar6 = (*param_1)();
      if (iVar6 != 0) {
        uVar8 = 4;
      }
      *(undefined1 *)puVar1 = uVar8;
      iVar6 = (*pcVar10)();
      if (iVar6 != 0) goto LAB_1004558a;
      *(undefined1 *)((int)puVar1 + 1) = 0;
      *(undefined1 *)((int)puVar1 + 2) = 0;
      *(undefined1 *)((int)puVar1 + 3) = 0;
LAB_100455f2:
      uVar7 = 4;
    }
    local_34 = 0x3902;
    local_2c = (uint)uVar7;
    local_30 = puVar1;
    FUN_100506fc(&local_34);
    FUN_1012d1f4(puVar1);
    uVar2 = 1;
  } while( true );
}

