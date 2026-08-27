/* FUN_2c1411e8 @ 0x2c1411e8 */

uint FUN_2c1411e8(char *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  if (((param_1 != (char *)0x0) && (*param_1 == -0xf)) && (-1 < (int)param_2)) {
    if (param_1[1] == '\x04') {
      FUN_2c13ee38(param_1,0xfffffffd);
      uVar5 = 0xfffffffd;
    }
    else {
      puVar3 = (uint *)(param_1 + 0x28);
      do {
        ExclusiveAccess(puVar3);
        uVar5 = *puVar3 | param_2;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar5;
      if ((param_1[1] == '3') &&
         (uVar2 = func_0x2c1407f4(param_1,*(undefined4 *)(param_1 + 0x24),param_1[0x23]), uVar2 != 0
         )) {
        uVar5 = uVar2;
        if (-1 < (int)((uint)(byte)param_1[0x23] << 0x1e)) {
          uVar5 = uVar2 & ~*(uint *)(param_1 + 0x24);
        }
        FUN_2c13ee24(param_1,uVar2);
        if ((param_1[0x22] & 0x10U) == 0) {
          iVar4 = 0x60;
        }
        else {
          iVar4 = 0x20;
        }
        *(uint *)(*(int *)(param_1 + 0x38) + iVar4) = uVar2;
        FUN_2c14075c(param_1);
        func_0x2c140db8();
        func_0x2c13ee58(*(undefined4 *)(param_1 + 0x24),param_1[0x23],uVar2,param_1);
      }
      FUN_2c13ee40(param_1,uVar5);
    }
    return uVar5;
  }
  FUN_2c13ee38(param_1,0xfffffffc);
  return 0xfffffffc;
}

