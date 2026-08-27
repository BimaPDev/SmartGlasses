/* FUN_2c479a90 @ 0x2c479a90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c479a90(int param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 unaff_r4;
  uint in_fpscr;
  undefined8 uVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  int iStack_14;
  
  puVar9 = *(undefined4 **)(_LAB_2c479ae0 + param_1 * 4);
  if (*(char *)(puVar9 + 2) == '\x11') {
    uVar8 = FUN_2c478604(*puVar9,puVar9[1]);
    if (uVar8 == 0) {
      uVar6 = (uint)*_LAB_2c479ae4;
    }
    else {
      if ((int)(uint)*_LAB_2c479ae4 <= (int)uVar8) {
        uVar8 = (uint)*_LAB_2c479ae4;
      }
      uVar6 = uVar8 & 0xffff;
      *_LAB_2c479ae4 = (ushort)uVar8;
    }
    uStack_1c = *_LAB_2c477408;
    puVar2 = (undefined1 *)FUN_2c46de74();
    FUN_2c66b4b8(&uStack_2c,_LAB_2c47740c,puVar2[5],puVar2[4],puVar2[3],puVar2[2],puVar2[1],*puVar2)
    ;
    uVar3 = FUN_2c48e738();
    FUN_2c48e5b4(uVar3,_LAB_2c477410,&uStack_2c);
    FUN_2c48e518(0,uVar3,_LAB_2c477414);
    FUN_2c48e518(0,uVar3,_LAB_2c477418);
    uVar10 = VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar10,uVar3,_LAB_2c47741c);
    FUN_2c48e518(0,uVar3,_LAB_2c477420);
    uVar3 = FUN_2c48e3e8(uVar3);
    uVar4 = FUN_2c66c4ec();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x72,_LAB_2c47742c,_LAB_2c477428,_LAB_2c477424,uVar4,uVar3);
  }
  uVar8 = (uint)*(ushort *)(puVar9 + 1);
  if (param_1 == 0) {
    uStack_28 = _LAB_2c47d3c0;
    uStack_24 = _LAB_2c47d3c4;
    _iStack_14 = CONCAT44(unaff_r4,*_LAB_2c47d3c8);
    uStack_20 = uVar8;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2e,_LAB_2c47d3d0,_LAB_2c47d3cc);
  }
  pcVar5 = (char *)*puVar9;
  uVar1 = (ulonglong)_iStack_14 >> 0x20;
  _iStack_14 = CONCAT44((int)uVar1,*DAT_2c47d54c);
  if (*DAT_2c47d548 != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x3e,DAT_2c47d560,DAT_2c47d55c,DAT_2c47d558,uVar8);
  }
  if (*pcVar5 == '\x02') {
    uStack_2c = FUN_2c473cb4(pcVar5 + 1,uVar8 - 1 & 0xffff,0);
    if (uStack_2c == 0) {
      FUN_2c6741e8(0x710,DAT_2c47d564);
    }
    else {
      if (*(int *)(uStack_2c + 0xc) == 0) {
        FUN_2c47a698();
      }
      else if (*(int *)(uStack_2c + 0xc) == 0xc) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x92,DAT_2c47d560,DAT_2c47d55c,DAT_2c47d580);
      }
      FUN_2c473cc0(&uStack_2c);
    }
  }
  else {
    if (*pcVar5 != '\x01') {
      if (*DAT_2c47d54c == *DAT_2c47d54c) {
        FUN_2c6741e8(0x711,DAT_2c47d554,DAT_2c47d550);
        return;
      }
      goto LAB_2c47d544;
    }
    iVar7 = FUN_2c47d220(&uStack_2c,pcVar5 + 1,uVar8 - 1 & 0xffff);
    if (iVar7 != 0) {
      if ((uStack_2c & 0xff) == 3) {
        iVar7 = FUN_2c47d220(&uStack_2c,uStack_24,uStack_20 & 0xffff);
        puVar9 = DAT_2c47d578;
        if (iVar7 != 0) {
          switch(uStack_2c >> 8 & 0xff) {
          case 3:
            if ((code *)*DAT_2c47d568 != (code *)0x0) {
              (*(code *)*DAT_2c47d568)(uStack_24,uStack_20 & 0xffff,uStack_18);
            }
            if (uStack_2c._2_1_ != '\0') {
              FUN_2c47af88(4,0,uStack_28);
            }
            break;
          case 4:
          case 5:
          case 7:
            FUN_2c47d1ec(&uStack_2c);
            break;
          case 6:
            if ((code *)*DAT_2c47d578 != (code *)0x0) {
              (*(code *)*DAT_2c47d578)(0);
              *puVar9 = 0;
            }
            break;
          default:
            FUN_2c6741e8(0x711,DAT_2c47d57c,DAT_2c47d550);
            break;
          case 9:
            if ((code *)*DAT_2c47d56c != (code *)0x0) {
              (*(code *)*DAT_2c47d56c)(DAT_2c47d574);
            }
            break;
          case 10:
            if ((code *)*DAT_2c47d56c != (code *)0x0) {
              (*(code *)*DAT_2c47d56c)(DAT_2c47d570);
            }
          }
        }
      }
      else if ((uStack_2c & 0xff) == 5) {
        FUN_2c47d954(uStack_24,uStack_20 & 0xffff);
      }
    }
  }
  if (*DAT_2c47d54c == iStack_14) {
    return;
  }
LAB_2c47d544:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

