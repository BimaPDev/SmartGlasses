/* FUN_2c49c4c0 @ 0x2c49c4c0 */

void FUN_2c49c4c0(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *extraout_r1_03;
  uint *extraout_r1_04;
  uint *extraout_r1_05;
  uint *extraout_r1_06;
  uint uVar3;
  uint *extraout_r1_07;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  undefined1 local_16;
  byte local_15;
  uint local_14;
  
  iVar2 = DAT_2c49c664;
  uVar7 = 0;
  local_14 = *DAT_2c49c668;
  local_16 = 0;
  if (*(int *)(DAT_2c49c664 + 4) == 1) {
    if (param_1 != 0x2b) {
      *param_2 = 0;
      puVar1 = param_2;
      switch(param_1) {
      case 0x14:
        iVar2 = FUN_2c674658();
        uVar7 = DAT_2c49c688;
        uVar4 = *DAT_2c49c684;
        *param_2 = (uint)(iVar2 == 0);
        FUN_2c648600(uVar7,(uint)(iVar2 == 0),uVar4);
        uVar7 = 0;
        param_2 = extraout_r1_02;
        break;
      case 0x15:
        uVar3 = FUN_2c49b8e8();
        uVar7 = DAT_2c49c68c;
        *param_2 = uVar3;
        FUN_2c648600(uVar7);
        uVar7 = 0;
        param_2 = extraout_r1_03;
        break;
      case 0x17:
        iVar2 = FUN_2c49b318(0x10,&local_15,0);
        if (iVar2 == 0) {
          uVar3 = (short)(local_15 & 0xf) * 0x1e + 0x32;
          *param_2 = uVar3;
        }
        else {
          uVar3 = *param_2;
        }
        FUN_2c648600(DAT_2c49c690,uVar3,iVar2);
        uVar7 = 0;
        param_2 = extraout_r1_04;
        break;
      case 0x18:
        iVar2 = FUN_2c49b318(0x10,&local_15,0);
        if (iVar2 == 0) {
          uVar3 = (short)(ushort)(local_15 >> 4) * 0x50 + 0xf28;
          *param_2 = uVar3;
        }
        else {
          uVar3 = *param_2;
        }
        FUN_2c648600(DAT_2c49c694,uVar3,iVar2);
        uVar7 = 0;
        param_2 = extraout_r1_05;
        break;
      case 0x19:
        iVar2 = FUN_2c49b318(0x12,&local_15,0);
        if (iVar2 == 0) {
          uVar3 = (uint)local_15 << 1;
          *param_2 = uVar3;
        }
        else {
          uVar3 = *param_2;
        }
        FUN_2c648600(DAT_2c49c698,uVar3,iVar2);
        uVar7 = 0;
        param_2 = extraout_r1_06;
        break;
      case 0x1a:
        iVar2 = FUN_2c49b318(0x13,&local_15,0);
        if (iVar2 == 0) {
          uVar3 = (short)(local_15 & 0x7f) * 10 + 0xe10;
          *param_2 = uVar3;
        }
        else {
          uVar3 = *param_2;
        }
        FUN_2c648600(DAT_2c49c69c,uVar3,iVar2);
        uVar7 = 0;
        param_2 = extraout_r1_07;
        break;
      case 0x29:
        cVar5 = '\x14';
        do {
          cVar6 = cVar5 + '\x01';
          FUN_2c49c4c0(cVar5,param_2);
          puVar1 = extraout_r1;
          cVar5 = cVar6;
        } while (cVar6 != '(');
      default:
        param_2 = puVar1;
        uVar7 = 0;
        break;
      case 0x2a:
        FUN_2c49b444();
        FUN_2c648600(DAT_2c49c674,*(undefined1 *)(iVar2 + 0xc),*DAT_2c49c670);
        FUN_2c648600(DAT_2c49c680,*DAT_2c49c678,*DAT_2c49c67c);
        uVar7 = 0;
        param_2 = extraout_r1_01;
      }
      goto LAB_2c49c51c;
    }
    if ((*param_2 & 0xffffff) >> 0x10 == 1) {
      FUN_2c49b318((*param_2 & 0xffff) >> 8,&local_16,0);
      FUN_2c648600(DAT_2c49c66c,*(undefined1 *)((int)param_2 + 1),local_16);
      param_2 = extraout_r1_00;
      goto LAB_2c49c51c;
    }
  }
  uVar7 = 0xffffffff;
LAB_2c49c51c:
  if ((*DAT_2c49c668 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar7,param_2,*DAT_2c49c668 ^ local_14,0);
}

