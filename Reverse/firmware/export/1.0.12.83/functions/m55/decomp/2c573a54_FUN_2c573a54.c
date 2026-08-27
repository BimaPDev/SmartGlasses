/* FUN_2c573a54 @ 0x2c573a54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c573a54(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uStack_40;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar6 = *(int *)(*(int *)(param_2 + 0x10) + param_3 * 4);
  iStack_1c = *_LAB_2c573c54;
  iVar7 = *(int *)(iVar6 + 0xb8);
  iVar8 = *(int *)(iVar6 + 0xd4);
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uVar10 = FUN_2c5c561c(param_1,0);
  uStack_40 = FUN_2c672a48((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
  iVar1 = FUN_2c669224(&uStack_40);
  iVar1 = *(int *)(iVar1 + 0x14) + 0x76c;
  if ((iVar7 == iVar1) && (iVar8 == iVar1)) {
    iVar1 = *(int *)(iVar6 + 0xbc);
    iVar7 = *(int *)(iVar6 + 0xc0);
    if ((iVar7 != *(int *)(iVar6 + 0xdc)) || (iVar1 != *(int *)(iVar6 + 0xd8))) {
      FUN_2c66b4b8(&uStack_34,_LAB_2c573c60,iVar1,iVar7,*(undefined4 *)(iVar6 + 0xc4),
                   *(undefined4 *)(iVar6 + 200),*(int *)(iVar6 + 0xd8),*(int *)(iVar6 + 0xdc),
                   *(undefined4 *)(iVar6 + 0xe0),*(undefined4 *)(iVar6 + 0xe4));
      goto LAB_2c573b3c;
    }
    iVar1 = FUN_2c573990(iVar1,iVar7);
    if (iVar1 != 0) {
      uVar2 = registry_lookup(0x2000);
      uVar3 = func_0x2c573794(*(undefined4 *)(iVar6 + 0xd0));
      FUN_2c66b4b8(&uStack_34,_LAB_2c573c58,uVar2,uVar3);
LAB_2c573aea:
      puVar9 = param_1 + 2;
      *param_1 = puVar9;
      uVar4 = FUN_2c66c4ec(&uStack_34);
      uStack_40._0_4_ = uVar4;
      if (uVar4 < 0x10) {
        if (uVar4 == 1) {
          *(undefined1 *)(param_1 + 2) = (undefined1)uStack_34;
        }
        else if (uVar4 != 0) goto LAB_2c573c3c;
      }
      else {
        puVar9 = (undefined4 *)FUN_2c573300(&uStack_40,0);
        *param_1 = puVar9;
        param_1[2] = (uint)uStack_40;
LAB_2c573c3c:
        FUN_2c674668(puVar9,&uStack_34,uVar4);
        puVar9 = (undefined4 *)*param_1;
      }
      param_1[1] = (uint)uStack_40;
      *(undefined1 *)((int)puVar9 + (uint)uStack_40) = 0;
      goto LAB_2c573b5c;
    }
    iVar1 = FUN_2c5739f0(*(undefined4 *)(iVar6 + 0xbc),*(undefined4 *)(iVar6 + 0xc0));
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(iVar6 + 0xbc);
      uVar5 = *(undefined4 *)(iVar6 + 0xc0);
      uVar2 = func_0x2c573794(*(undefined4 *)(iVar6 + 0xd0));
      FUN_2c66b4b8(&uStack_34,_LAB_2c573c64,uVar3,uVar5,uVar2);
      goto LAB_2c573aea;
    }
    uVar2 = registry_lookup(0x6211);
    uVar3 = func_0x2c573794(*(undefined4 *)(iVar6 + 0xd0));
    FUN_2c66b4b8(&uStack_34,_LAB_2c573c58,uVar2,uVar3);
    *param_1 = param_1 + 2;
  }
  else {
    FUN_2c66b4b8(&uStack_34,_LAB_2c573c5c,*(undefined4 *)(iVar6 + 0xb8),
                 *(undefined4 *)(iVar6 + 0xbc),*(undefined4 *)(iVar6 + 0xc0),
                 *(undefined4 *)(iVar6 + 0xd4),*(undefined4 *)(iVar6 + 0xd8),
                 *(undefined4 *)(iVar6 + 0xdc));
LAB_2c573b3c:
    *param_1 = param_1 + 2;
  }
  puVar9 = param_1 + 2;
  uVar4 = FUN_2c66c4ec(&uStack_34);
  uStack_40._0_4_ = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 2) = (undefined1)uStack_34;
    }
    else if (uVar4 != 0) goto LAB_2c573bb4;
  }
  else {
    puVar9 = (undefined4 *)FUN_2c573300(&uStack_40,0);
    *param_1 = puVar9;
    param_1[2] = (uint)uStack_40;
LAB_2c573bb4:
    FUN_2c674668(puVar9,&uStack_34,uVar4);
    puVar9 = (undefined4 *)*param_1;
  }
  param_1[1] = (uint)uStack_40;
  *(undefined1 *)((int)puVar9 + (uint)uStack_40) = 0;
LAB_2c573b5c:
  if (*_LAB_2c573c54 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

