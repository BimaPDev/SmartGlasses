/* FUN_2c4a3068 @ 0x2c4a3068 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a3068(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_25;
  int iStack_24;
  
  uVar6 = _LAB_2c4a3180;
  uVar5 = _LAB_2c4a317c;
  uVar4 = _LAB_2c4a3164;
  iVar3 = _LAB_2c4a3160;
  iStack_24 = *_LAB_2c4a315c;
  uStack_4e = 8;
  uStack_4c = 0x32;
  uStack_50 = 0x307;
  uStack_4a = 0x2706;
  uStack_46 = 0x21;
  uStack_43 = 1;
  uStack_44 = 0;
  uStack_48 = 0x10f;
  uStack_42 = 2;
  uStack_25 = 7;
  iVar8 = 0;
  puVar9 = (undefined2 *)&uStack_44;
  do {
    iVar7 = iVar3 + iVar8 * 7;
    uVar2 = *(undefined2 *)(iVar7 + 4);
    uVar1 = *(undefined1 *)(iVar7 + 6);
    *(undefined4 *)((int)puVar9 + 3) = *(undefined4 *)(iVar3 + iVar8 * 7);
    *(undefined2 *)((int)puVar9 + 7) = uVar2;
    *(undefined1 *)((int)puVar9 + 9) = uVar1;
    FUN_2c66ac44(uVar5,iVar8,*(undefined1 *)((int)puVar9 + 3));
    FUN_2c66ac44(uVar6,iVar8,*(undefined1 *)(puVar9 + 2));
    iVar7 = iVar8 + 1;
    FUN_2c66ac44(uVar4,iVar8,*(undefined1 *)((int)puVar9 + 5));
    iVar8 = iVar7;
    puVar9 = (undefined2 *)((int)puVar9 + 7);
  } while (iVar7 != 4);
  FUN_2c66b4b8(_LAB_2c4a316c,_LAB_2c4a3170,0,5,0,_LAB_2c4a3168);
  FUN_2c66ac44(_LAB_2c4a3174,_LAB_2c4a316c);
  FUN_2c4a29b4(&uStack_50,&uStack_44);
  uStack_54 = _LAB_2c4a3178;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  FUN_2c4a2b7c(&uStack_6c);
  if (*_LAB_2c4a315c == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

