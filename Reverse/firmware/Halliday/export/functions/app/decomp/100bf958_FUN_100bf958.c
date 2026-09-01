/* FUN_100bf958 @ 0x100bf958 */

void FUN_100bf958(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = DAT_100bfa40;
  cVar6 = '\x05';
  uVar8 = ((int)PTR_DAT_100bfa30 - (int)PTR_DAT_100bfa34) * 0x20 & 0xff00U | DAT_100bfa3c;
  iVar11 = param_1;
  iVar5 = param_2;
  iVar2 = param_3;
  do {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar10 = iVar7 + 0x40;
    FUN_1011dbf4(iVar10,0xffffffff);
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar4 = *(int *)(param_1 + 0x10) + param_3;
    if (uVar4 <= uVar3) {
      uVar8 = *(uint *)(param_1 + 8);
      iVar2 = *(int *)(iVar7 + 0x3c) + uVar8;
      if (uVar3 < param_3 + uVar8) {
        uVar9 = (uVar3 & 0xffff) - (uVar8 & 0xffff) & 0xffff;
        uVar8 = ((uVar8 & 0xffff) + param_3) - (uVar3 & 0xffff) & 0xffff;
        FUN_1011ea40(iVar2,param_2,uVar9,uVar4,iVar11,iVar5);
        FUN_1011ea40(*(undefined4 *)(iVar7 + 0x3c),param_2 + uVar9,uVar8);
        *(uint *)(param_1 + 8) = uVar8;
      }
      else {
        FUN_1011ea40(iVar2,param_2,param_3,uVar4,iVar11,iVar5);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
      FUN_10113fd0(iVar7 + 0x54);
      thunk_FUN_10113e2c(iVar10);
      return;
    }
    thunk_FUN_10113e2c(iVar10);
    iVar5 = *(int *)(param_1 + 0x14);
    iVar11 = param_3;
    FUN_100a5b78(uVar8,uVar1,PTR_s_Not_enough_buffer___d___d___d_100bfa38,
                 *(undefined4 *)(param_1 + 0x10),param_3,iVar5,iVar2);
    FUN_1011dbc8(10);
  } while ((*(int *)(param_1 + 0x14) != 0) && (cVar6 = cVar6 + -1, cVar6 != '\0'));
  return;
}

