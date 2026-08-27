/* FUN_2c5dafe8 @ 0x2c5dafe8 */

void FUN_2c5dafe8(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *local_3c;
  uint local_38;
  int local_34;
  
  iVar8 = *(int *)(param_1 + 0x34);
  local_34 = *DAT_2c5db0ec;
  if (iVar8 != *(int *)(param_1 + 0x38)) {
    iVar4 = iVar8 + 8;
    iVar5 = iVar8;
    do {
      if (*(int *)(iVar4 + -8) != iVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar5 = iVar5 + 0x18;
      iVar4 = iVar4 + 0x18;
    } while (*(int *)(param_1 + 0x38) != iVar5);
    *(int *)(param_1 + 0x38) = iVar8;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x14);
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  do {
    while( true ) {
      do {
        puVar7 = puVar6;
        if (puVar7 == puVar9) {
          if (*DAT_2c5db0ec == local_34) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        puVar6 = puVar7 + 1;
        iVar8 = FUN_2c5d8bdc(*puVar7);
      } while (iVar8 == 0x7fffffff);
      puVar3 = (undefined1 *)FUN_2c5d8be0(*puVar7);
      puVar7 = *(undefined4 **)(param_1 + 0x38);
      local_3c = puVar3;
      if (puVar7 != *(undefined4 **)(param_1 + 0x3c)) break;
      FUN_2c5dad54(param_1 + 0x34,puVar7,&local_3c);
    }
    *puVar7 = puVar7 + 2;
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(DAT_2c5db0f0);
    }
    uVar1 = FUN_2c66c4ec();
    local_38 = uVar1;
    if (uVar1 < 0x10) {
      puVar2 = (undefined1 *)*puVar7;
      if (uVar1 == 1) {
        *puVar2 = *puVar3;
        puVar2 = (undefined1 *)*puVar7;
      }
      else if (uVar1 != 0) goto LAB_2c5db0d2;
    }
    else {
      puVar2 = (undefined1 *)FUN_2c5da228(&local_38,0);
      *puVar7 = puVar2;
      puVar7[2] = local_38;
LAB_2c5db0d2:
      FUN_2c674668(puVar2,puVar3,uVar1);
      puVar2 = (undefined1 *)*puVar7;
    }
    puVar7[1] = local_38;
    puVar2[local_38] = 0;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x18;
  } while( true );
}

