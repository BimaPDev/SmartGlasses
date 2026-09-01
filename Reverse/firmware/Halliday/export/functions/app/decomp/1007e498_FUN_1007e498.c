/* FUN_1007e498 @ 0x1007e498 */

undefined4 FUN_1007e498(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined1 auStack_28 [3];
  char local_25;
  
  piVar9 = (int *)param_1[3];
  bVar1 = *(byte *)(*piVar9 + 0x1d);
  if ((bVar1 & 0x10) == 0) {
    uVar10 = 0x11;
  }
  else {
    uVar10 = 0x14;
  }
  iVar2 = FUN_101208f0(param_1,auStack_30,&local_2c,*param_2,*(undefined2 *)(param_2 + 3));
  if (iVar2 != 1) {
    return 0x1000;
  }
  iVar2 = *piVar9;
  if (*(char *)(iVar2 + 9) == '\0') {
    return 0;
  }
  if (*(short *)(iVar2 + 0x10) == 0) {
    return 0;
  }
  iVar8 = local_2c * (uint)*(ushort *)(iVar2 + 0xe) + (uint)*(ushort *)(param_2 + 1);
  FUN_10120588(param_1,iVar8);
  uVar3 = FUN_10120910(param_1,(uint)*(byte *)(*piVar9 + 0xb) << 9,auStack_28,8);
  iVar2 = *piVar9;
  if (*(char *)(iVar2 + 0x18) == '\x01') {
    if ((*(byte *)(iVar2 + 0x19) & uVar3) <= (uint)*(byte *)(iVar2 + 0x1a)) {
LAB_1007e55a:
      if (local_25 != -1) {
        if ((*(char *)(*param_1 + 0x10) != '\0') &&
           (pcVar7 = *(code **)(*param_1 + 0xc), pcVar7 != (code *)0x0)) {
          (*pcVar7)(DAT_1007e6d4,DAT_1007e6cc,0x180,*(undefined2 *)(param_2 + 3),
                    *(undefined2 *)(param_2 + 1),local_25);
        }
        if ((*(char *)(*param_1 + 0x10) != '\0') &&
           (pcVar7 = *(code **)(*param_1 + 0xc), pcVar7 != (code *)0x0)) {
          (*pcVar7)(DAT_1007e6d8,DAT_1007e6cc,0x182);
        }
        FUN_1007dca8(param_1,auStack_28,8,0,1);
        if ((*(char *)(*param_1 + 0x10) != '\0') &&
           (pcVar7 = *(code **)(*param_1 + 0xc), pcVar7 != (code *)0x0)) {
          (*pcVar7)(DAT_1007e6dc,DAT_1007e6cc,0x184);
        }
        FUN_1007dca8(param_1,*(undefined4 *)(param_2 + 0xd),8,0,1);
        if ((*(char *)(*param_1 + 0x10) != '\0') &&
           (pcVar7 = *(code **)(*param_1 + 0xc), pcVar7 != (code *)0x0)) {
          (*pcVar7)(DAT_1007e6e0,DAT_1007e6cc,0x186);
        }
        FUN_1007dca8(param_1,*(undefined4 *)(param_2 + 9),(uint)*(byte *)(*piVar9 + 0xb) << 9,0,1);
        iVar2 = *param_1;
        if (*(code **)(iVar2 + 0x1d) != (code *)0x0) {
          if (*(char *)(*piVar9 + 0x30) == '\0') {
            if ((*(char *)(iVar2 + 0x10) != '\0') && (*(code **)(iVar2 + 0xc) != (code *)0x0)) {
              (**(code **)(iVar2 + 0xc))
                        (DAT_1007e6e4,DAT_1007e6cc,0x18b,*(undefined2 *)(param_2 + 3));
            }
            FUN_1012054e(param_1,(uint)*(ushort *)(*piVar9 + 0xe) * (uint)*(ushort *)(param_2 + 3));
            FUN_1007e054(param_1);
            return 0;
          }
          (**(code **)(iVar2 + 0x1d))(DAT_1007e6e8,param_1);
          return 0;
        }
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar3 = (uint)*(byte *)(iVar2 + 0xb);
      if (uVar3 == 0x20) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (1 << uVar3) - 1;
      }
      if ((uVar5 & *(uint *)(param_2 + 5)) == 0) {
        return 1;
      }
      uVar6 = *(undefined4 *)(param_2 + 9);
      uVar4 = *(undefined4 *)(param_2 + 0xd);
      if (((bVar1 & 0xef) == 0) || (*(char *)(*param_1 + 4) == '\x01')) {
        FUN_1007e0b0(param_1,iVar8,uVar6,uVar3 << 9,uVar4,8,uVar10);
        return 1;
      }
      if ((bVar1 & 4) != 0) {
        FUN_1007e1d4(param_1,iVar8,uVar6,uVar3 << 9,uVar4,8,uVar10);
        return 1;
      }
      pcVar7 = *(code **)(*param_1 + 0x15);
      if (pcVar7 == (code *)0x0) {
        return 0;
      }
      (*pcVar7)(param_1,iVar8,uVar6,uVar3 << 9,uVar4,8,uVar10);
      return 1;
    }
  }
  else if ((*(char *)(iVar2 + 0x18) != '\x02') ||
          ((uint)*(byte *)(iVar2 + 0x1a) != (*(byte *)(iVar2 + 0x19) & uVar3))) goto LAB_1007e55a;
  if ((*(char *)(*param_1 + 0x10) != '\0') &&
     (pcVar7 = *(code **)(*param_1 + 0xc), pcVar7 != (code *)0x0)) {
    (*pcVar7)(DAT_1007e6d0,DAT_1007e6cc,0x17b,iVar8,uVar3,*(undefined1 *)(iVar2 + 0x19),
              *(undefined1 *)(iVar2 + 0x1a));
  }
  return 0;
}

