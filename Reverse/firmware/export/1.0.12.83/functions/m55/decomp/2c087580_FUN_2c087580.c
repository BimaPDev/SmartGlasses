/* FUN_2c087580 @ 0x2c087580 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c08758e) */
/* WARNING: Removing unreachable block (ram,0x2c0875a4) */
/* WARNING: Removing unreachable block (ram,0x2c0874fc) */
/* WARNING: Removing unreachable block (ram,0x2c0874fe) */
/* WARNING: Removing unreachable block (ram,0x2c0874e6) */
/* WARNING: Removing unreachable block (ram,0x2c087504) */
/* WARNING: Removing unreachable block (ram,0x2c087526) */
/* WARNING: Removing unreachable block (ram,0x2c087588) */
/* WARNING: Removing unreachable block (ram,0x2c087506) */
/* WARNING: Removing unreachable block (ram,0x2c0875a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c087580(void)

{
  code *pcVar1;
  
  software_bkpt(0xd0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xc2,0x2c087578);
  (*pcVar1)();
}

