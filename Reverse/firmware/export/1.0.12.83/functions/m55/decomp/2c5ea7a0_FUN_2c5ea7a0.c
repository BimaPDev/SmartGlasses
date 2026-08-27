/* FUN_2c5ea7a0 @ 0x2c5ea7a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ea7a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  if ((*(int *)(param_2 + 0x14) == 0) && (*(int *)(param_2 + 0x10) == 0)) {
    uVar6 = 0x4e;
    uVar3 = _LAB_2c5ea8fc;
  }
  else {
    iVar2 = FUN_2c62c45c(0x50);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0x10));
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
      uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0x14));
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
      uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0x18));
      *(undefined4 *)(iVar2 + 0x18) = uVar3;
      uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0x1c));
      *(undefined4 *)(iVar2 + 0x1c) = uVar3;
      uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0x20));
      *(undefined4 *)(iVar2 + 0x20) = uVar3;
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(iVar2 + 0x2c) = uVar3;
      *(undefined1 *)(iVar2 + 0x30) = *(undefined1 *)(param_2 + 0x30);
      *(undefined1 *)(iVar2 + 0x31) = *(undefined1 *)(param_2 + 0x31);
      uVar3 = *(undefined4 *)(param_2 + 0x34);
      *(undefined1 *)(iVar2 + 0x40) = 1;
      *(undefined4 *)(iVar2 + 0x34) = uVar3;
      if (*(int *)(param_2 + 0x24) != 0) {
        uVar3 = func_0x2c5e949c();
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
        *(undefined1 *)(iVar2 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
      }
      FUN_2c5e94ec(iVar2,iVar2 + 0x3c);
      if ((*(char **)(param_2 + 0x48) == (char *)0x0) || (**(char **)(param_2 + 0x48) == '\0')) {
        *(undefined4 *)(iVar2 + 0x48) = 0;
      }
      else {
        puVar5 = (undefined1 *)FUN_2c62c45c(0x1c);
        *puVar5 = **(undefined1 **)(param_2 + 0x48);
        uVar3 = func_0x2c5e949c(*(undefined4 *)(*(int *)(param_2 + 0x48) + 4));
        *(undefined4 *)(puVar5 + 4) = uVar3;
        uVar3 = func_0x2c5e949c(*(undefined4 *)(*(int *)(param_2 + 0x48) + 8));
        *(undefined4 *)(puVar5 + 8) = uVar3;
        uVar3 = func_0x2c5e949c(*(undefined4 *)(*(int *)(param_2 + 0x48) + 0xc));
        *(undefined4 *)(puVar5 + 0xc) = uVar3;
        uVar3 = func_0x2c5e949c(*(undefined4 *)(*(int *)(param_2 + 0x48) + 0x10));
        *(undefined4 *)(puVar5 + 0x10) = uVar3;
        uVar3 = func_0x2c5e949c(*(undefined4 *)(*(int *)(param_2 + 0x48) + 0x14));
        *(undefined4 *)(puVar5 + 0x14) = uVar3;
        uVar3 = FUN_2c673c88();
        *(undefined4 *)(puVar5 + 0x18) = uVar3;
        *(undefined1 **)(iVar2 + 0x48) = puVar5;
      }
      iVar1 = _LAB_2c5ea8f8;
      FUN_2c620fa4(0x3e81,iVar2);
      (**(code **)(iVar1 + 0x4c))(1,iVar2);
      uVar4 = (**(code **)(iVar1 + 0x44))(1);
      if ((1 < uVar4) && (iVar2 = FUN_2c5e7270(6,1), *(char *)(iVar2 + 0x32) != '\x03')) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5ea908,0x81,_LAB_2c5ea900,_LAB_2c5ea904);
      }
      func_0x2c5e6abc(6);
      return 1;
    }
    uVar6 = 0x53;
    uVar3 = _LAB_2c5ea90c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5ea908,uVar6,_LAB_2c5ea900,uVar3);
}

