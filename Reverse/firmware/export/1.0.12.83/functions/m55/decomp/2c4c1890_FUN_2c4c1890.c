/* FUN_2c4c1890 @ 0x2c4c1890 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4c1890(uint param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *extraout_r1_03;
  uint *extraout_r1_04;
  uint *extraout_r1_05;
  uint *extraout_r1_06;
  uint *extraout_r1_07;
  uint *extraout_r1_08;
  uint *extraout_r1_09;
  uint *extraout_r1_10;
  int iVar5;
  uint *extraout_r1_11;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  undefined4 unaff_r4;
  int iVar10;
  int iVar11;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  byte bVar12;
  
  uVar2 = _LAB_2c4c19dc;
  iVar11 = _LAB_2c49e018;
  iVar10 = DAT_2c49c664;
  uVar7 = *_LAB_2c4c19b0;
  uStack_1c = uVar7;
  if (0x13 < param_1) {
    if (param_1 < 0x28) {
      uVar6 = *_LAB_2c4c19b0 ^ uVar7;
      if (uVar6 != 0) goto LAB_2c4c19aa;
      uVar7 = 0;
      uVar6 = *DAT_2c49c668;
      bVar12 = (byte)((uint)unaff_r4 >> 0x18);
      if (*(int *)(DAT_2c49c664 + 4) == 1) {
        if (param_1 != 0x2b) {
          *param_2 = 0;
          puVar1 = param_2;
          switch(param_1) {
          case 0x14:
            iVar10 = FUN_2c674658();
            uVar2 = DAT_2c49c688;
            uVar3 = *DAT_2c49c684;
            *param_2 = (uint)(iVar10 == 0);
            FUN_2c648600(uVar2,(uint)(iVar10 == 0),uVar3);
            uVar7 = 0;
            param_2 = extraout_r1_02;
            break;
          case 0x15:
            uVar7 = FUN_2c49b8e8();
            uVar2 = DAT_2c49c68c;
            *param_2 = uVar7;
            FUN_2c648600(uVar2);
            uVar7 = 0;
            param_2 = extraout_r1_03;
            break;
          case 0x17:
            iVar10 = FUN_2c49b318(0x10,&stack0xffffffeb,0);
            if (iVar10 == 0) {
              uVar7 = (short)(bVar12 & 0xf) * 0x1e + 0x32;
              *param_2 = uVar7;
            }
            else {
              uVar7 = *param_2;
            }
            FUN_2c648600(DAT_2c49c690,uVar7,iVar10);
            uVar7 = 0;
            param_2 = extraout_r1_04;
            break;
          case 0x18:
            iVar10 = FUN_2c49b318(0x10,&stack0xffffffeb,0);
            if (iVar10 == 0) {
              uVar7 = (short)(ushort)(bVar12 >> 4) * 0x50 + 0xf28;
              *param_2 = uVar7;
            }
            else {
              uVar7 = *param_2;
            }
            FUN_2c648600(DAT_2c49c694,uVar7,iVar10);
            uVar7 = 0;
            param_2 = extraout_r1_05;
            break;
          case 0x19:
            iVar10 = FUN_2c49b318(0x12,&stack0xffffffeb,0);
            if (iVar10 == 0) {
              uVar7 = (uint)bVar12 << 1;
              *param_2 = uVar7;
            }
            else {
              uVar7 = *param_2;
            }
            FUN_2c648600(DAT_2c49c698,uVar7,iVar10);
            uVar7 = 0;
            param_2 = extraout_r1_06;
            break;
          case 0x1a:
            iVar10 = FUN_2c49b318(0x13,&stack0xffffffeb,0);
            if (iVar10 == 0) {
              uVar7 = (short)(bVar12 & 0x7f) * 10 + 0xe10;
              *param_2 = uVar7;
            }
            else {
              uVar7 = *param_2;
            }
            FUN_2c648600(DAT_2c49c69c,uVar7,iVar10);
            uVar7 = 0;
            param_2 = extraout_r1_07;
            break;
          case 0x29:
            cVar8 = '\x14';
            do {
              cVar9 = cVar8 + '\x01';
              FUN_2c49c4c0(cVar8,param_2);
              puVar1 = extraout_r1;
              cVar8 = cVar9;
            } while (cVar9 != '(');
          default:
            param_2 = puVar1;
            uVar7 = 0;
            break;
          case 0x2a:
            FUN_2c49b444();
            FUN_2c648600(DAT_2c49c674,*(undefined1 *)(iVar10 + 0xc),*DAT_2c49c670);
            FUN_2c648600(DAT_2c49c680,*DAT_2c49c678,*DAT_2c49c67c);
            uVar7 = 0;
            param_2 = extraout_r1_01;
          }
          goto LAB_2c49c51c;
        }
        if ((*param_2 & 0xffffff) >> 0x10 == 1) {
          FUN_2c49b318((*param_2 & 0xffff) >> 8,&stack0xffffffea,0);
          FUN_2c648600(DAT_2c49c66c,*(undefined1 *)((int)param_2 + 1),0);
          param_2 = extraout_r1_00;
          goto LAB_2c49c51c;
        }
      }
      uVar7 = 0xffffffff;
LAB_2c49c51c:
      if ((*DAT_2c49c668 ^ uVar6) == 0) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail(uVar7,param_2,*DAT_2c49c668 ^ uVar6,0);
    }
    if (param_1 < 0x3c) {
      FUN_2c49de50();
      FUN_2c49c4c0(param_1,param_2);
      param_1 = 0;
      param_2 = extraout_r1_10;
    }
    else if (param_1 == 0x42) {
      iVar10 = *_LAB_2c4c19b8;
      if (iVar10 < 1) {
        iVar10 = *_LAB_2c4c19c0;
      }
      iVar11 = *_LAB_2c4c19c4;
      if (iVar11 == 0) {
        iVar11 = 0xed8;
      }
      FUN_2c648600(_LAB_2c4c19d4,*_LAB_2c4c19bc,iVar10,*_LAB_2c4c19cc,iVar11,*_LAB_2c4c19d0,
                   *_LAB_2c4c19c8);
      param_1 = 0;
      param_2 = extraout_r1_09;
    }
    else {
      if (param_1 == 0x40) {
        iVar10 = 0;
        iVar11 = (int)*param_2 >> 0x10;
        uVar7 = *param_2 & 0xffff;
        uStack_1e = 0;
        FUN_2c648600(_LAB_2c4c19d8,uVar7,iVar11);
        do {
          FUN_2c673e88(uVar7 + iVar10 & 0xffff,&uStack_1e);
          iVar5 = uVar7 + iVar10;
          iVar10 = iVar10 + 1;
          FUN_2c648600(uVar2,iVar5,uStack_1e);
          param_2 = extraout_r1_11;
        } while (iVar10 < iVar11);
      }
      else {
        if (param_1 != 0x41) {
          param_1 = 0xffffffff;
          goto LAB_2c4c18da;
        }
        uVar2 = FUN_2c4baafc();
        uVar3 = func_0x2c4bab14();
        uVar4 = func_0x2c4bab2c();
        FUN_2c648600(_LAB_2c4c19b4,uVar2,uVar3,uVar4);
        param_2 = extraout_r1_08;
      }
      param_1 = 0;
    }
LAB_2c4c18da:
    uVar6 = *_LAB_2c4c19b0 ^ uStack_1c;
    if (uVar6 == 0) {
      return param_1;
    }
LAB_2c4c19aa:
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(param_1,param_2,uVar6,0);
  }
  uVar6 = *_LAB_2c4c19b0 ^ uVar7;
  if (uVar6 != 0) goto LAB_2c4c19aa;
  iVar10 = *_LAB_2c49e01c;
  uStack_1c._3_1_ = (undefined1)(uVar7 >> 0x18);
  uStack_1c._0_3_ = (uint3)(ushort)uVar7;
  if (*(int *)(_LAB_2c49e018 + 0x48) != 1) {
LAB_2c49dff2:
    uVar7 = 0xffffffff;
    goto LAB_2c49debc;
  }
  if (param_1 == 0x2b) {
    uVar6 = *param_2;
    uVar7 = (uVar6 & 0xffffff) >> 0x10;
    if ((uVar6 & 0xff0000) == 0) {
      FUN_2c49c6a0(_LAB_2c49e018,(uVar6 & 0xffff) >> 8,(int)&uStack_1c + 2);
      FUN_2c648600(_LAB_2c49e020,*(undefined1 *)((int)param_2 + 1),uStack_1c._2_1_);
      goto LAB_2c49debc;
    }
    goto LAB_2c49dff2;
  }
  *param_2 = 0;
  switch(param_1) {
  case 0:
    if (*(int *)(iVar11 + 0x48) == 1) {
      uVar7 = *_LAB_2c49e024;
      if ((int)uVar7 < 1) {
        FUN_2c49ce4c(_LAB_2c49e018);
        uVar7 = *(uint *)(iVar11 + 0x14);
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
    *param_2 = uVar7;
    uVar7 = 0;
    FUN_2c648600(_LAB_2c49e028);
    break;
  case 1:
    if (*(int *)(iVar11 + 0x48) == 1) {
      uVar7 = *_LAB_2c49e02c;
      if ((int)uVar7 < -2999) {
        FUN_2c49cb44(_LAB_2c49e018);
        uVar7 = *(uint *)(iVar11 + 0x2c);
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
    *param_2 = uVar7;
    uVar7 = 0;
    FUN_2c648600(_LAB_2c49e030);
    break;
  case 2:
    if (*(int *)(iVar11 + 0x48) == 1) {
      uVar7 = *_LAB_2c49e034;
      if ((int)uVar7 < 0) {
        uVar7 = *(uint *)(iVar11 + 0x20);
      }
    }
    else {
      uVar7 = 0x14;
    }
    *param_2 = uVar7;
    uVar7 = 0;
    FUN_2c648600(_LAB_2c49e038);
    break;
  case 3:
    if (*(int *)(iVar11 + 0x48) == 1) {
      uVar7 = *_LAB_2c49e03c;
      if ((int)uVar7 < -2999) {
        uVar7 = *(uint *)(iVar11 + 0x24);
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
    *param_2 = uVar7;
    uVar7 = 0;
    FUN_2c648600(_LAB_2c49e040);
    break;
  case 4:
    if (*(int *)(iVar11 + 0x48) == 1) {
      uVar7 = *_LAB_2c49e044;
      if ((int)uVar7 < 0) {
        iVar5 = FUN_2c49c9e8(_LAB_2c49e018,0xa4,&stack0xffffffe8);
        if (iVar5 < 0) {
          uVar7 = *(uint *)(iVar11 + 0x30);
        }
        else {
          uVar7 = 0;
          *_LAB_2c49e04c = 0;
          *(undefined4 *)(iVar11 + 0x30) = 0;
        }
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
    *param_2 = uVar7;
    uVar7 = 0;
    FUN_2c648600(_LAB_2c49e048);
    break;
  default:
    goto LAB_2c49deba;
  case 0x13:
    uVar7 = 0;
    FUN_2c49c938();
    break;
  case 0x29:
    uVar7 = 0;
    do {
      uVar6 = uVar7 & 0xff;
      uVar7 = uVar7 + 1;
      FUN_2c49de50(uVar6,param_2);
    } while (uVar7 != 0x13);
    goto LAB_2c49deba;
  case 0x2a:
    iVar5 = FUN_2c49c6a0(_LAB_2c49e018,0xab,(int)&uStack_1c + 3);
    if (-1 < iVar5) {
      uVar7 = 0;
      *(uint *)(iVar11 + 0x38) = uStack_1c >> 0x18;
      FUN_2c49cec0();
      break;
    }
LAB_2c49deba:
    uVar7 = 0;
  }
LAB_2c49debc:
  if (*_LAB_2c49e01c == iVar10) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

