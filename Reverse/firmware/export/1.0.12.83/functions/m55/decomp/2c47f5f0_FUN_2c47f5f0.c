/* FUN_2c47f5f0 @ 0x2c47f5f0 */

void FUN_2c47f5f0(int param_1,char *param_2)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint auStack_105c [1024];
  uint local_5c [17];
  
  local_5c[0x10] = *DAT_2c47f6c8;
  iVar5 = (int)*param_2;
  local_5c[0] = 1;
  local_5c[1] = 0;
  local_5c[8] = 1;
  local_5c[9] = 0;
  local_5c[2] = 0;
  local_5c[3] = 0;
  local_5c[4] = 0;
  local_5c[5] = 0;
  local_5c[6] = 0;
  local_5c[7] = 0;
  local_5c[10] = 0;
  local_5c[0xb] = 0;
  local_5c[0xc] = 0;
  local_5c[0xd] = 0;
  local_5c[0xe] = 0;
  local_5c[0xf] = 0;
  FUN_2c47f410(local_5c,param_2 + 4,local_5c,iVar5);
  sVar1 = FUN_2c47f4d0(local_5c,iVar5);
  uVar4 = (uint)(short)(sVar1 + -1);
  if (1 < (int)uVar4) {
    do {
      while( true ) {
        puVar3 = local_5c + 8;
        FUN_2c47f554(puVar3,puVar3,puVar3,param_2);
        if ((1 << (uVar4 & 0x1f) & local_5c[(int)uVar4 >> 5]) == 0) break;
        sVar1 = (short)uVar4 + -1;
        FUN_2c47f554(local_5c + 8,local_5c + 8,param_1,param_2);
        uVar4 = (uint)sVar1;
        if (sVar1 == 1) goto LAB_2c47f68e;
      }
      sVar1 = (short)uVar4 + -1;
      uVar4 = (uint)sVar1;
    } while (sVar1 != 1);
  }
LAB_2c47f68e:
  if (0 < iVar5) {
    puVar3 = (uint *)(param_1 + -4);
    puVar2 = local_5c + 8;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
    } while ((uint *)(param_1 + (iVar5 - 1U & 0xff) * 4) != puVar3);
  }
  if (*DAT_2c47f6c8 != local_5c[0x10]) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

