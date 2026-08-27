/* FUN_1405c948 @ 0x1405c948 */

void FUN_1405c948(int param_1,undefined4 param_2,undefined4 param_3,short param_4,byte param_5,
                 byte param_6,int param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  
  uVar6 = (uint)param_6;
  iVar7 = *(int *)(DAT_1405ca98 + param_1 * 4);
  iVar2 = FUN_1405b148(param_1,DAT_1405ca9c);
  if ((iVar2 == 0) || (iVar2 = FUN_1405b1e0(param_1), uVar6 == 0)) {
    return;
  }
  uVar5 = 0;
  uVar8 = 0;
  puVar4 = (undefined2 *)(param_7 + 2);
LAB_1405c982:
  do {
    switch(*(undefined1 *)(puVar4 + -1)) {
    case 1:
      if ((param_5 < 2) && (uVar5 == 0)) {
        iVar3 = FUN_14065c10(puVar4,*(undefined1 *)((int)puVar4 + -1),0x1801);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x44,DAT_1405caa0,0x21f,DAT_1405caa4,param_1,*puVar4);
        }
        uVar1 = puVar4[8];
        *(undefined2 *)(iVar7 + 0x34) = uVar1;
        *(char *)(iVar7 + 0x36) = (char)puVar4[9] - (char)uVar1;
      }
      break;
    case 4:
      *(undefined1 *)(iVar2 + 0x11) = 0;
      uVar8 = puVar4[8];
      break;
    case 5:
      iVar3 = FUN_14065c10(puVar4,*(undefined1 *)((int)puVar4 + -1),0x2a05);
      if (iVar3 != 0) goto code_r0x1405c9e6;
      iVar3 = FUN_14065c10(puVar4,*(undefined1 *)((int)puVar4 + -1),0x2b2a);
      if (iVar3 == 0) {
        iVar3 = FUN_14065c10(puVar4,*(undefined1 *)((int)puVar4 + -1),0x2b29);
        if (iVar3 == 0) {
          iVar3 = FUN_14065c10(puVar4,*(undefined1 *)((int)puVar4 + -1),0x2b3a);
          if (iVar3 != 0) {
            *(undefined2 *)(iVar2 + 0x18) = uVar8;
          }
        }
        else {
          *(undefined2 *)(iVar2 + 0x14) = uVar8;
        }
        break;
      }
      *(undefined2 *)(iVar2 + 0x16) = uVar8;
      goto joined_r0x1405ca4e;
    case 6:
      if ((*(char *)(iVar2 + 0x11) != '\0') &&
         (iVar3 = FUN_14065c10(puVar4,*(undefined1 *)((int)puVar4 + -1),0x2902), iVar3 != 0)) {
        *(short *)(iVar2 + 0x12) = param_4 + (short)uVar5;
      }
    }
joined_r0x1405ca4e:
    puVar4 = puVar4 + 0xb;
    uVar5 = uVar5 + 1;
    if (uVar5 == uVar6) {
      return;
    }
  } while( true );
code_r0x1405c9e6:
  *(undefined1 *)(iVar2 + 0x11) = 1;
  uVar5 = uVar5 + 1;
  *(char *)(iVar7 + 0x37) = (char)uVar8 - (char)*(undefined2 *)(iVar7 + 0x34);
  puVar4 = puVar4 + 0xb;
  if (uVar5 == uVar6) {
    return;
  }
  goto LAB_1405c982;
}

