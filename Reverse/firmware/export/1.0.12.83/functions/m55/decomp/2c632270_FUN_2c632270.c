/* FUN_2c632270 @ 0x2c632270 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c632270(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_24;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c632490;
  iVar3 = FUN_2c602408(param_2,param_2,param_3,0);
  if (iVar3 == 0x18) {
    FUN_2c602400(param_2);
    iVar3 = FUN_2c602400(param_2);
    iVar7 = *(int *)(iVar3 + 0x24);
    iVar3 = FUN_2c602608(param_2);
    iVar9 = FUN_2c62a6b4(&uStack_24,*(undefined4 *)(iVar3 + 8),*(int *)(iVar7 + 0x24) + 0x14);
    if (iVar9 != 0) {
      uVar6 = *(undefined4 *)(iVar3 + 8);
      *(undefined4 **)(iVar3 + 8) = &uStack_24;
      if ((int)((uint)*(byte *)(iVar7 + 0x3c) << 0x1a) < 0) {
        if (*(short *)(iVar7 + 0x36) == *(short *)(iVar7 + 0x3a)) {
          FUN_2c632088(iVar7,iVar3,*(short *)(iVar7 + 0x36),0x21);
          FUN_2c632174(iVar7,iVar3,*(undefined2 *)(iVar7 + 0x3a),0x21);
        }
        else {
          FUN_2c632088(iVar7,iVar3,*(short *)(iVar7 + 0x3a),0x20);
          FUN_2c632174(iVar7,iVar3,*(undefined2 *)(iVar7 + 0x3a),0x20);
          FUN_2c632088(iVar7,iVar3,*(undefined2 *)(iVar7 + 0x36),1);
          FUN_2c632174(iVar7,iVar3,*(undefined2 *)(iVar7 + 0x36),1);
        }
      }
      else {
        FUN_2c632088(iVar7,iVar3,*(undefined2 *)(iVar7 + 0x3a),0x20);
        FUN_2c632174(iVar7,iVar3,*(undefined2 *)(iVar7 + 0x3a),0x20);
      }
      *(undefined4 *)(iVar3 + 8) = uVar6;
    }
    if (*_LAB_2c632490 == iStack_1c) {
      puVar2 = _LAB_2c632494;
      if (_LAB_2c632494 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)**(undefined4 **)(param_2 + 4);
        goto LAB_2c602118;
      }
      while( true ) {
        puVar2 = (undefined4 *)*puVar2;
LAB_2c602118:
        if (puVar2 == (undefined4 *)0x0) break;
        if (puVar2[4] != 0) {
          *(undefined4 *)(param_2 + 0xc) = 0;
          (*(code *)puVar2[4])(puVar2,param_2);
          return ~(uint)*(byte *)(param_2 + 0x1c) & 1;
        }
      }
      return 1;
    }
  }
  else {
    uVar4 = FUN_2c602110(_LAB_2c632494,param_2);
    if (uVar4 == 1) {
      uVar5 = FUN_2c602400(param_2);
      iVar9 = *(int *)(uVar5 + 0x24);
      if (iVar3 == 8) {
        FUN_2c5ff4d8();
        uVar4 = FUN_2c5ff624();
        if (uVar4 == 0) {
          iVar9 = *(int *)(uVar5 + 0x24);
          uVar6 = FUN_2c5ff4d8();
          iVar3 = FUN_2c5ff4e4();
          if (iVar3 == 4) {
            *(undefined2 *)(iVar9 + 0x38) = *(undefined2 *)(iVar9 + 0x36);
            uVar8 = FUN_2c606bc0(iVar9);
            iVar3 = func_0x2c603124();
            if (iVar3 != 0) {
              FUN_2c603048(uVar8,0);
            }
          }
          iVar3 = FUN_2c5ff4e4(uVar6);
          if ((iVar3 == 1) || (iVar3 = FUN_2c5ff4e4(uVar6), iVar3 == 3)) {
            FUN_2c5ff5cc(uVar6,&uStack_24);
            uVar1 = FUN_2c631fd4(iVar9,(int)uStack_24._2_2_);
            *(undefined2 *)(iVar9 + 0x36) = uVar1;
            *(undefined2 *)(iVar9 + 0x38) = uVar1;
          }
          FUN_2c606b80(iVar9,1);
          *(undefined2 *)(iVar9 + 0x3a) = 0xffff;
          lv_obj_add_flag_invalidate(*(undefined4 *)(iVar9 + 0x24),1);
          FUN_2c602340(iVar9,0x20,0);
          if (*(int *)(iVar9 + 0x28) == 0) {
            FUN_2c607df0(iVar9);
          }
          uStack_24 = (uint)*(ushort *)(iVar9 + 0x36);
          uVar4 = FUN_2c602340(iVar9,0x1c,&uStack_24);
        }
      }
      else if (iVar3 == 1) {
        iVar3 = FUN_2c5ff4d8();
        uVar4 = 0;
        if ((iVar3 != 0) &&
           ((iVar7 = FUN_2c5ff4e4(), iVar7 == 1 || (uVar4 = FUN_2c5ff4e4(iVar3), uVar4 == 3)))) {
          FUN_2c5ff5cc(iVar3,&uStack_24);
          uVar1 = FUN_2c631fd4(iVar9,(int)uStack_24._2_2_);
          *(undefined2 *)(iVar9 + 0x3a) = uVar1;
          uVar4 = FUN_2c607df0(uVar5);
        }
      }
      else {
        uVar4 = uVar5;
        if (iVar3 == 9) {
          *(undefined2 *)(iVar9 + 0x3a) = 0xffff;
          if (*_LAB_2c632490 == iStack_1c) {
            iVar3 = *DAT_2c607e4c;
            FUN_2c600c2c();
            uVar4 = FUN_2c6078f0(uVar5,&stack0xffffffec);
            if (*DAT_2c607e4c == iVar3) {
              return uVar4;
            }
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          goto LAB_2c63248c;
        }
      }
    }
    if (*_LAB_2c632490 == iStack_1c) {
      return uVar4;
    }
  }
LAB_2c63248c:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

