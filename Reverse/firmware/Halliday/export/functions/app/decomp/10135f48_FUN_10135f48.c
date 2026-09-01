/* FUN_10135f48 @ 0x10135f48 */

int FUN_10135f48(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar8 = FUN_100d0b48();
    if (iVar8 != 0) {
      iVar9 = FUN_1013577a(param_1 + 4,0xb);
      if ((iVar9 != 0) || (iVar9 = FUN_1013556e(param_1), iVar9 == 0)) {
        iVar8 = FUN_100d0b48();
        if (iVar8 == 0) {
          iVar9 = -0x80;
        }
        else {
          iVar6 = iVar8 + 0xd4;
          iVar9 = FUN_1013577a(iVar6,4);
          if (iVar9 == 0) {
            iVar3 = FUN_1013577a(iVar6,2);
            iVar9 = 0;
            if (iVar3 == 0) {
              iVar9 = FUN_1013577a(iVar6,3);
              if ((iVar9 == 0) && (iVar9 = FUN_1013577a(iVar6,1), iVar9 == 0)) {
                iVar9 = FUN_100d0a78(*(undefined1 *)(param_1 + 10));
                if (iVar9 == 0) {
                  iVar9 = -0x16;
                }
                else {
                  if (*(int *)(param_1 + 0xbc) == 0) {
                    iVar9 = FUN_100e0874(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
                    *(int *)(param_1 + 0xbc) = iVar9;
                    if (iVar9 == 0) {
                      return -0xc;
                    }
                  }
                  iVar9 = FUN_100d0b84(iVar8);
                  if ((iVar9 == 0) && (iVar9 = FUN_10135838(iVar8,1), iVar9 != 0)) {
                    puVar4 = (undefined4 *)FUN_100c1fe4(iVar9 + 8,6);
                    uVar2 = FUN_100d0a38(0x29);
                    *(undefined1 *)((int)puVar4 + 2) = uVar2;
                    uVar1 = FUN_100d0724();
                    uVar2 = *DAT_100d13c0;
                    *(undefined1 *)puVar4 = uVar1;
                    *(undefined1 *)((int)puVar4 + 1) = uVar2;
                    *(undefined1 *)((int)puVar4 + 3) = 0x10;
                    *(undefined1 *)(puVar4 + 1) = 9;
                    *(undefined1 *)((int)puVar4 + 5) = 0xb;
                    *(undefined2 *)(iVar8 + 0x1b8) = 0xb09;
                    *(undefined1 *)(iVar8 + 0xd9) = 1;
                    *(undefined4 *)(iVar8 + 0xda) = *puVar4;
                    *(undefined2 *)(iVar8 + 0xde) = *(undefined2 *)(puVar4 + 1);
                    FUN_10135546(iVar8,iVar9,0);
                    uVar5 = FUN_10135440(iVar8 + 0xd0,2);
                    FUN_10135440(uVar5,0xb);
                    FUN_10135440(iVar6,3);
                    iVar9 = 0;
                  }
                  else {
                    iVar9 = -0x69;
                  }
                }
              }
              else {
                iVar9 = -0x10;
              }
            }
          }
          else {
            iVar9 = -5;
          }
        }
        return iVar9;
      }
      iVar6 = iVar8 + 0xd4;
      iVar9 = FUN_1013577a(iVar6,3);
      if ((iVar9 != 0) || (iVar9 = FUN_1013577a(iVar6,1), iVar9 != 0)) {
        return -0x10;
      }
      iVar9 = *(int *)(param_1 + 0xbc);
      iVar9 = FUN_101335d6(param_1,iVar9 + 0x10,iVar9 + 0x18,iVar9 + 0x1a,
                           *(undefined1 *)(iVar9 + 0xc));
      if (iVar9 != 0) {
        return iVar9;
      }
      FUN_10135440(iVar8 + 0xd0,0xb);
LAB_10135fdc:
      FUN_10135440(iVar6,1);
      return 0;
    }
LAB_10135f64:
    iVar8 = -0x80;
  }
  else {
    if (*(char *)(param_1 + 3) == '\x01') {
      iVar6 = FUN_100d0b48();
      if (iVar6 == 0) goto LAB_10135f64;
      iVar9 = iVar6 + 0xd4;
      iVar8 = FUN_1013577a(iVar9,4);
      if (iVar8 != 0) {
        return -5;
      }
      iVar8 = FUN_1013577a(iVar9,3);
      if (iVar8 != 0) {
        return -0x10;
      }
      iVar8 = FUN_1013577a(iVar9,1);
      if (iVar8 != 0) {
        return -0x10;
      }
      iVar8 = FUN_100d0a78(*(undefined1 *)(param_1 + 10));
      if ((iVar8 != 0) ||
         ((iVar8 = FUN_1013577a(param_1 + 4,0xb), iVar8 == 0 &&
          (iVar8 = FUN_1013556e(param_1), iVar8 != 0)))) {
        if (*(int *)(param_1 + 0xbc) == 0) {
          iVar8 = FUN_100e0874(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
          *(int *)(param_1 + 0xbc) = iVar8;
          if (iVar8 == 0) {
            return -0xc;
          }
        }
        iVar8 = FUN_100d0b84(iVar6);
        if ((iVar8 != 0) || (iVar8 = FUN_10135838(iVar6,0xb), iVar8 == 0)) {
          return -0x69;
        }
        puVar7 = (undefined1 *)FUN_100c1fe4(iVar8 + 8,1);
        uVar2 = FUN_100d0a38(0x29);
        *puVar7 = uVar2;
        FUN_10134022(param_1,6,iVar8,0,0);
        FUN_10135440(iVar9,0xf);
        iVar6 = iVar6 + 0xd0;
        goto LAB_10135fdc;
      }
    }
    iVar8 = -0x16;
  }
  return iVar8;
}

