/* FUN_2c483a46 @ 0x2c483a46 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c483a46(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  bool in_ZR;
  bool in_CY;
  
  uVar8 = _LAB_2c483ad8;
  puVar7 = _LAB_2c483ac4;
  puVar6 = _LAB_2c483ac0;
  if (!in_CY || in_ZR) {
    if (param_1 != 0) {
      *_LAB_2c483ac0 = *param_2;
      uVar9 = *(undefined1 *)((int)puVar6 + 3);
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(param_2 + 1);
      uVar1 = *(undefined1 *)((int)puVar6 + 5);
      uVar2 = *(undefined1 *)(puVar6 + 1);
      uVar3 = *(undefined1 *)((int)puVar6 + 2);
      uVar4 = *(undefined1 *)puVar6;
      uVar5 = *(undefined1 *)((int)puVar6 + 1);
      *_LAB_2c483ac4 = 1;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x11d,_LAB_2c483ad4,_LAB_2c483ad0,uVar8,uVar4,uVar5,uVar3,uVar9,uVar2,uVar1);
    }
  }
  else if (param_1 == 5) {
    uVar9 = 0;
    *_LAB_2c483ac0 = 0;
    *puVar7 = 0;
    *(undefined2 *)(puVar6 + 1) = 0;
    goto LAB_2c483a5e;
  }
  uVar9 = *_LAB_2c483ac4;
LAB_2c483a5e:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x128,_LAB_2c483ad4,_LAB_2c483ad0,_LAB_2c483acc,_LAB_2c483ac8,uVar9);
}

