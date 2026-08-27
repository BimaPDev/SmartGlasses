/* FUN_2c48f684 @ 0x2c48f684 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48f684(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c48f92c;
  iVar3 = FUN_2c490d3c();
  uVar2 = _LAB_2c48fb48;
  uVar1 = _LAB_2c48fb18;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4b,_LAB_2c48f938,_LAB_2c48f934,_LAB_2c48f930);
  }
  switch(*param_1) {
  case 0x52:
    if (*(short *)(param_1 + 0x3fe) != 0x20) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x61,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb34,_LAB_2c48fb28);
    }
    uVar4 = *(uint *)(param_1 + 6);
    uStack_20 = 0xffffffff;
    uStack_24 = 0;
    uStack_38._1_3_ = (undefined3)*_LAB_2c48f940;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)uVar4);
    uStack_34._1_3_ = (undefined3)_LAB_2c48f940[1];
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)((uint)*_LAB_2c48f940 >> 0x18));
    uStack_30._1_3_ = (undefined3)_LAB_2c48f940[2];
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)((uint)_LAB_2c48f940[1] >> 0x18));
    uStack_2c._1_3_ = (undefined3)_LAB_2c48f940[3];
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)((uint)_LAB_2c48f940[2] >> 0x18));
    uStack_28 = (uint)_LAB_2c48f940[3] >> 0x18;
    if (*_DAT_2c48f944 != '\0') {
      if ((uVar4 & 0xffffffef) == 3) {
        *_DAT_2c48fb4c = 1;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x73,uVar1,_LAB_2c48fb14,uVar2,uVar4);
      }
      *_DAT_2c48f948 = 0;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x7c,_LAB_2c48f938,_LAB_2c48f934,_LAB_2c48f94c,uVar4);
  case 0x53:
    if (*(short *)(param_1 + 0x3fe) != 0x20) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x8f,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb34,_LAB_2c48fb28);
    }
    uVar4 = *(uint *)(param_1 + 6);
    uStack_20 = *(undefined4 *)(param_1 + 0x1e);
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_38 = uVar4 & 0xff;
    uStack_28 = 0;
    uStack_24 = 0;
    if ((uVar4 < 0x15) && ((int)((_LAB_2c48fb40 >> (uVar4 & 0xff)) << 0x1f) < 0)) {
      FUN_2c674668((int)&uStack_38 + 1,param_1 + 10);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x9b,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb44,uVar4,uStack_20,(int)&uStack_38 + 1);
    }
    FUN_2c4f843c(uVar4 & 0xff,(int)&uStack_38 + 1);
    func_0x2c48ed24(&uStack_38);
  default:
    if (*_LAB_2c48f92c == iStack_1c) {
      return;
    }
    break;
  case 0x5a:
    if (*(short *)(param_1 + 0x3fe) != 8) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xac,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb2c,_LAB_2c48fb28,
            *(short *)(param_1 + 0x3fe),8);
    }
    if (*_LAB_2c48f92c == iStack_1c) {
      if ((code *)*_LAB_2c48cbcc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c48cbc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*_LAB_2c48cbcc)(*(undefined4 *)(param_1 + 6));
        return;
      }
      return;
    }
    break;
  case 0x5c:
    if (*(short *)(param_1 + 0x3fe) != 8) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xa3,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb2c,_LAB_2c48fb28,
            *(short *)(param_1 + 0x3fe),8);
    }
    if (*_LAB_2c48f92c == iStack_1c) {
      uStack_20 = _LAB_2c48cba8;
      iStack_1c = _LAB_2c48cbac;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x77,_LAB_2c48cbb4,_LAB_2c48cbb0);
    }
    break;
  case 0x5e:
    if (*(short *)(param_1 + 0x3fe) != 0x308) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xb5,_LAB_2c48f938,_LAB_2c48f934,_LAB_2c48f954,_LAB_2c48f950,
            *(short *)(param_1 + 0x3fe),0x308);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xbe,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb30,param_1 + 6);
  case 0x60:
    if (*(short *)(param_1 + 0x3fe) != 8) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xc4,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb2c,_LAB_2c48fb28,
            *(short *)(param_1 + 0x3fe),8);
    }
    if (*_LAB_2c48f92c == iStack_1c) {
      iStack_1c = _LAB_2c48cc2c;
      uStack_20 = _LAB_2c48cc30;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x91,_LAB_2c48cc38,_LAB_2c48cc34);
    }
    break;
  case 0x93:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x20,_LAB_2c48f938,_LAB_2c48f934,_LAB_2c48f958,*(undefined4 *)(param_1 + 2),0x93,
          *(undefined2 *)(param_1 + 0x3fe));
  case 0x94:
    if (*(short *)(param_1 + 0x3fe) != 0x80) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x27,_LAB_2c48f938,_LAB_2c48f934,_LAB_2c48f960,_LAB_2c48f95c,
            *(short *)(param_1 + 0x3fe),0x80);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2b,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb22_2,*(undefined4 *)(param_1 + 2),0x94,0x80,
          param_1 + 6);
  case 0x95:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1a,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb10,*(undefined4 *)(param_1 + 2));
  case 0x96:
    if (*(short *)(param_1 + 0x3fe) == 0xc) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x14,_LAB_2c48f938,_LAB_2c48f934,_LAB_2c48f93c,param_1 + 6);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x10,_LAB_2c48fb18,_LAB_2c48fb14,_LAB_2c48fb3c,_LAB_2c48fb38,*(short *)(param_1 + 0x3fe)
          ,0xc);
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

