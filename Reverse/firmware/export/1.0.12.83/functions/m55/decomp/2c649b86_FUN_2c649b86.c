/* FUN_2c649b86 @ 0x2c649b86 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c649b86(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
LAB_2c649c10:
    FUN_2c648600(_LAB_2c649d54);
    FUN_2c648600(_LAB_2c649d58);
    uVar3 = _LAB_2c649d5c;
  }
  else {
    pbVar5 = *(byte **)(param_2 + 4);
    if (((*pbVar5 == 0x67) && (pbVar5[1] == 0x65)) && (pbVar5[2] == 0x74)) {
      iVar6 = FUN_2c674198();
      if (iVar6 == 0) {
        uVar3 = 32000;
      }
      else {
        uVar3 = _LAB_2c649d6c;
        if (((iVar6 != 3) && (uVar3 = _LAB_2c649d70, iVar6 != 7)) &&
           (((uVar3 = _LAB_2c649d74, iVar6 != 0xb &&
             ((uVar3 = _LAB_2c649d78, iVar6 != 0xd && (uVar3 = _LAB_2c649d68, iVar6 != 0xf)))) &&
            (uVar3 = _LAB_2c649d50, iVar6 != 0x13)))) {
          uVar3 = 0;
        }
      }
      FUN_2c648600(_LAB_2c649d64,uVar3);
    }
    else {
      iVar6 = *pbVar5 - 0x73;
      if ((iVar6 == 0) && (iVar6 = pbVar5[1] - 0x65, iVar6 == 0)) {
        iVar6 = pbVar5[2] - 0x74;
      }
      if ((iVar6 != 0) || (param_1 == 2)) goto LAB_2c649c10;
      pcVar7 = *(char **)(param_2 + 8);
      cVar1 = *pcVar7;
      if ((cVar1 == '3') &&
         ((pbVar5 = (byte *)(uint)(byte)pcVar7[1], pbVar5 == (byte *)0x32 && (pcVar7[2] == 'K')))) {
        FUN_2c648600(_LAB_2c649d48,0x20,0x32,0x33,param_4);
        uVar3 = 0;
      }
      else if (cVar1 == '2') {
        if ((pcVar7[1] == '4') && (pcVar7[2] == 'M')) {
          FUN_2c648600(_LAB_2c649d60,0x18,0x4d,0x32,param_4);
          uVar3 = 7;
        }
        else {
          pbVar5 = (byte *)(uint)(byte)pcVar7[1];
          if ((pbVar5 != (byte *)0x36) || (pcVar7[2] != 'M')) goto LAB_2c649c2a;
          FUN_2c648600(_LAB_2c649d60,0x1a,0x36,0x32,param_4);
          uVar3 = 0;
        }
      }
      else {
LAB_2c649c2a:
        if (((cVar1 == '4') && (pbVar5 = (byte *)(uint)(byte)pcVar7[1], pbVar5 == &PendSV)) &&
           (pbVar5 = (byte *)(uint)(byte)pcVar7[2], pbVar5 == (byte *)0x4d)) {
          FUN_2c648600(_LAB_2c649d60,0x30,0x4d,0x34,param_4);
          uVar3 = 0xb;
        }
        else if (((cVar1 == '5') && (pbVar5 = (byte *)(uint)(byte)pcVar7[1], pbVar5 == (byte *)0x32)
                 ) && (pcVar7[2] == 'M')) {
          FUN_2c648600(_LAB_2c649d60,0x34,0x32,0x35,param_4);
          uVar3 = 0;
        }
        else if (((cVar1 == '7') && (pbVar5 = (byte *)(uint)(byte)pcVar7[1], pbVar5 == &PendSV)) &&
                (pcVar7[2] == 'M')) {
          FUN_2c648600(_LAB_2c649d60,0x4e,0x38,0x37,param_4);
          uVar3 = 0;
        }
        else if (((cVar1 == '9') && (pcVar7[1] == '6')) && (pcVar7[2] == 'M')) {
          FUN_2c648600(_LAB_2c649d60,0x60,pbVar5,0x4d,param_4);
          uVar3 = 0xf;
        }
        else {
          iVar6 = FUN_2c66c540(pcVar7,_LAB_2c649d7c,4);
          if (iVar6 == 0) {
            FUN_2c648600(_LAB_2c649d60,0x68);
            uVar3 = 0xf;
          }
          else {
            iVar6 = FUN_2c66c540(pcVar7,_LAB_2c649d80,4);
            if (iVar6 == 0) {
              FUN_2c648600(_LAB_2c649d60,0xc0);
              uVar3 = 0x13;
            }
            else {
              iVar6 = FUN_2c66c540(pcVar7,_LAB_2c649d84,4);
              if (iVar6 != 0) goto LAB_2c649c10;
              FUN_2c648600(_LAB_2c649d60,0xd0);
              uVar3 = 0x13;
            }
          }
        }
      }
      FUN_2c674278(0x20,uVar3);
    }
    func_0x2c674058(5,0);
    uVar3 = _LAB_2c649d4c;
  }
  iVar4 = *DAT_2c648674;
  iVar6 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar3,&stack0xfffffff4,&stack0xfffffff4,iVar4,unaff_r4,
                       unaff_lr);
  if (-1 < iVar6) {
    if (iVar6 < 0x7ff) {
      if (iVar6 == 0) goto LAB_2c648630;
    }
    else {
      iVar6 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar2 = (code *)FUN_2c648328();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(_LAB_2c648678,iVar6);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar6);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar4) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

