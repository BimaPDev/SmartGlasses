/* FUN_2c628e74 @ 0x2c628e74 */

int FUN_2c628e74(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char local_37;
  byte local_36;
  byte local_35;
  undefined1 auStack_34 [4];
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c629040;
  iVar3 = FUN_2c628d58(param_1,param_4,DAT_2c629044,0);
  if (((-1 < iVar3) && (iVar4 = FUN_2c62de74(param_1,&local_37,1,0), iVar4 == 0)) &&
     (iVar4 = FUN_2c62de74(param_1,auStack_34,3,0), iVar4 == 0)) {
    if (local_37 == '\0') {
      puVar5 = (undefined4 *)FUN_2c47245c(4,0xc);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(undefined4 **)(param_2 + 0xc) = puVar5;
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) & 0xdf;
      iVar4 = FUN_2c62de74(param_1,&local_30,4,0);
      if (iVar4 == 0) {
        if (param_3 == 0) {
          iVar4 = local_30 << 1;
        }
        else {
          iVar4 = local_30 << 2;
        }
        uVar6 = FUN_2c47245c(4,iVar4);
        uVar7 = FUN_2c47245c(4,local_30);
        *puVar5 = uVar6;
        puVar5[1] = uVar7;
        puVar5[2] = local_30 & 0x3fffffff | param_3 << 0x1e;
        iVar4 = FUN_2c62de74(param_1,uVar6,iVar4,0);
        if (iVar4 == 0) {
          iVar4 = FUN_2c62de74(param_1,uVar7,local_30,0);
joined_r0x2c62902e:
          if (iVar4 == 0) goto LAB_2c628fa0;
        }
      }
    }
    else if (local_37 == '\x03') {
      puVar5 = (undefined4 *)FUN_2c47245c(4,0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined4 **)(param_2 + 0xc) = puVar5;
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 0x20;
      iVar4 = FUN_2c62de74(param_1,&local_30,2,0);
      if (((iVar4 == 0) && (iVar4 = FUN_2c62de74(param_1,&local_36,1,0), iVar4 == 0)) &&
         (iVar4 = FUN_2c62de74(param_1,&local_35,1,0), iVar4 == 0)) {
        uVar1 = (ushort)local_36;
        uVar2 = (ushort)local_35;
        uVar6 = FUN_2c47245c(4,local_30 & 0xffff);
        uVar7 = FUN_2c47245c(4,local_30 & 0xffff);
        uVar8 = FUN_2c47245c(4,(int)(short)uVar1 * (int)(short)uVar2);
        *(byte *)(puVar5 + 3) = local_36;
        *puVar5 = uVar8;
        *(byte *)((int)puVar5 + 0xd) = local_35;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        iVar4 = FUN_2c62de74(param_1,uVar6,local_30 & 0xffff,0);
        if ((iVar4 == 0) && (iVar4 = FUN_2c62de74(param_1,uVar7,local_30 & 0xffff,0), iVar4 == 0)) {
          iVar4 = FUN_2c62de74(param_1,uVar8,(int)(short)uVar1 * (int)(short)uVar2,0);
          goto joined_r0x2c62902e;
        }
      }
    }
  }
  iVar3 = -1;
LAB_2c628fa0:
  if (*DAT_2c629040 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar3;
}

