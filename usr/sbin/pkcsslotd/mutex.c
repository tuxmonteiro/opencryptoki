static const char rcsid[] = "$Header: /cvsroot/opencryptoki/opencryptoki/usr/sbin/pkcsslotd/mutex.c,v 1.1 2005/01/18 16:09:04 kyoder Exp $";

/*
             Common Public License Version 0.5

             THE ACCOMPANYING PROGRAM IS PROVIDED UNDER THE TERMS OF
             THIS COMMON PUBLIC LICENSE ("AGREEMENT"). ANY USE,
             REPRODUCTION OR DISTRIBUTION OF THE PROGRAM CONSTITUTES
             RECIPIENT'S ACCEPTANCE OF THIS AGREEMENT.

             1. DEFINITIONS

             "Contribution" means: 
                   a) in the case of the initial Contributor, the
                   initial code and documentation distributed under
                   this Agreement, and 

                   b) in the case of each subsequent Contributor:
                   i) changes to the Program, and
                   ii) additions to the Program;

                   where such changes and/or additions to the Program
                   originate from and are distributed by that
                   particular Contributor. A Contribution 'originates'
                   from a Contributor if it was added to the Program
                   by such Contributor itself or anyone acting on such
                   Contributor's behalf. Contributions do not include
                   additions to the Program which: (i) are separate
                   modules of software distributed in conjunction with
                   the Program under their own license agreement, and
                   (ii) are not derivative works of the Program.


             "Contributor" means any person or entity that distributes
             the Program.

             "Licensed Patents " mean patent claims licensable by a
             Contributor which are necessarily infringed by the use or
             sale of its Contribution alone or when combined with the
             Program. 

             "Program" means the Contributions distributed in
             accordance with this Agreement.

             "Recipient" means anyone who receives the Program under
             this Agreement, including all Contributors.

             2. GRANT OF RIGHTS

                   a) Subject to the terms of this Agreement, each
                   Contributor hereby grants Recipient a
                   non-exclusive, worldwide, royalty-free copyright
                   license to reproduce, prepare derivative works of,
                   publicly display, publicly perform, distribute and
                   sublicense the Contribution of such Contributor, if
                   any, and such derivative works, in source code and
                   object code form.

                   b) Subject to the terms of this Agreement, each
                   Contributor hereby grants Recipient a
                   non-exclusive, worldwide, royalty-free patent
                   license under Licensed Patents to make, use, sell,
                   offer to sell, import and otherwise transfer the
                   Contribution of such Contributor, if any, in source
                   code and object code form. This patent license
                   shall apply to the combination of the Contribution
                   and the Program if, at the time the Contribution is
                   added by the Contributor, such addition of the
                   Contribution causes such combination to be covered
                   by the Licensed Patents. The patent license shall
                   not apply to any other combinations which include
                   the Contribution. No hardware per se is licensed
                   hereunder.

                   c) Recipient understands that although each
                   Contributor grants the licenses to its
                   Contributions set forth herein, no assurances are
                   provided by any Contributor that the Program does
                   not infringe the patent or other intellectual
                   property rights of any other entity. Each
                   Contributor disclaims any liability to Recipient
                   for claims brought by any other entity based on
                   infringement of intellectual property rights or
                   otherwise. As a condition to exercising the rights
                   and licenses granted hereunder, each Recipient
                   hereby assumes sole responsibility to secure any
                   other intellectual property rights needed, if any.

                   For example, if a third party patent license is
                   required to allow Recipient to distribute the
                   Program, it is Recipient's responsibility to
                   acquire that license before distributing the
                   Program.

                   d) Each Contributor represents that to its
                   knowledge it has sufficient copyright rights in its
                   Contribution, if any, to grant the copyright
                   license set forth in this Agreement.

             3. REQUIREMENTS

             A Contributor may choose to distribute the Program in
             object code form under its own license agreement, provided
             that:
                   a) it complies with the terms and conditions of
                   this Agreement; and

                   b) its license agreement:
                   i) effectively disclaims on behalf of all
                   Contributors all warranties and conditions, express
                   and implied, including warranties or conditions of
                   title and non-infringement, and implied warranties
                   or conditions of merchantability and fitness for a
                   particular purpose;

                   ii) effectively excludes on behalf of all
                   Contributors all liability for damages, including
                   direct, indirect, special, incidental and
                   consequential damages, such as lost profits;

                   iii) states that any provisions which differ from
                   this Agreement are offered by that Contributor
                   alone and not by any other party; and

                   iv) states that source code for the Program is
                   available from such Contributor, and informs
                   licensees how to obtain it in a reasonable manner
                   on or through a medium customarily used for
                   software exchange.

             When the Program is made available in source code form:
                   a) it must be made available under this Agreement;
                   and
                   b) a copy of this Agreement must be included with
                   each copy of the Program. 

             Contributors may not remove or alter any copyright notices
             contained within the Program.

             Each Contributor must identify itself as the originator of
             its Contribution, if any, in a manner that reasonably
             allows subsequent Recipients to identify the originator of
             the Contribution. 


             4. COMMERCIAL DISTRIBUTION

             Commercial distributors of software may accept certain
             responsibilities with respect to end users, business
             partners and the like. While this license is intended to
             facilitate the commercial use of the Program, the
             Contributor who includes the Program in a commercial
             product offering should do so in a manner which does not
             create potential liability for other Contributors.
             Therefore, if a Contributor includes the Program in a
             commercial product offering, such Contributor ("Commercial
             Contributor") hereby agrees to defend and indemnify every
             other Contributor ("Indemnified Contributor") against any
             losses, damages and costs (collectively "Losses") arising
             from claims, lawsuits and other legal actions brought by a
             third party against the Indemnified Contributor to the
             extent caused by the acts or omissions of such Commercial
             Contributor in connection with its distribution of the
             Program in a commercial product offering. The obligations
             in this section do not apply to any claims or Losses
             relating to any actual or alleged intellectual property
             infringement. In order to qualify, an Indemnified
             Contributor must: a) promptly notify the Commercial
             Contributor in writing of such claim, and b) allow the
             Commercial Contributor to control, and cooperate with the
             Commercial Contributor in, the defense and any related
             settlement negotiations. The Indemnified Contributor may
             participate in any such claim at its own expense.


             For example, a Contributor might include the Program in a
             commercial product offering, Product X. That Contributor
             is then a Commercial Contributor. If that Commercial
             Contributor then makes performance claims, or offers
             warranties related to Product X, those performance claims
             and warranties are such Commercial Contributor's
             responsibility alone. Under this section, the Commercial
             Contributor would have to defend claims against the other
             Contributors related to those performance claims and
             warranties, and if a court requires any other Contributor
             to pay any damages as a result, the Commercial Contributor
             must pay those damages.


             5. NO WARRANTY

             EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE
             PROGRAM IS PROVIDED ON AN "AS IS" BASIS, WITHOUT
             WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR
             IMPLIED INCLUDING, WITHOUT LIMITATION, ANY WARRANTIES OR
             CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
             FITNESS FOR A PARTICULAR PURPOSE. Each Recipient is solely
             responsible for determining the appropriateness of using
             and distributing the Program and assumes all risks
             associated with its exercise of rights under this
             Agreement, including but not limited to the risks and
             costs of program errors, compliance with applicable laws,
             damage to or loss of data, programs or equipment, and
             unavailability or interruption of operations. 

             6. DISCLAIMER OF LIABILITY
             EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER
             RECIPIENT NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY
             FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
             OR CONSEQUENTIAL DAMAGES (INCLUDING WITHOUT LIMITATION
             LOST PROFITS), HOWEVER CAUSED AND ON ANY THEORY OF
             LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
             (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
             OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE EXERCISE
             OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE
             POSSIBILITY OF SUCH DAMAGES.

             7. GENERAL

             If any provision of this Agreement is invalid or
             unenforceable under applicable law, it shall not affect
             the validity or enforceability of the remainder of the
             terms of this Agreement, and without further action by the
             parties hereto, such provision shall be reformed to the
             minimum extent necessary to make such provision valid and
             enforceable.


             If Recipient institutes patent litigation against a
             Contributor with respect to a patent applicable to
             software (including a cross-claim or counterclaim in a
             lawsuit), then any patent licenses granted by that
             Contributor to such Recipient under this Agreement shall
             terminate as of the date such litigation is filed. In
             addition, If Recipient institutes patent litigation
             against any entity (including a cross-claim or
             counterclaim in a lawsuit) alleging that the Program
             itself (excluding combinations of the Program with other
             software or hardware) infringes such Recipient's
             patent(s), then such Recipient's rights granted under
             Section 2(b) shall terminate as of the date such
             litigation is filed.

             All Recipient's rights under this Agreement shall
             terminate if it fails to comply with any of the material
             terms or conditions of this Agreement and does not cure
             such failure in a reasonable period of time after becoming
             aware of such noncompliance. If all Recipient's rights
             under this Agreement terminate, Recipient agrees to cease
             use and distribution of the Program as soon as reasonably
             practicable. However, Recipient's obligations under this
             Agreement and any licenses granted by Recipient relating
             to the Program shall continue and survive. 

             Everyone is permitted to copy and distribute copies of
             this Agreement, but in order to avoid inconsistency the
             Agreement is copyrighted and may only be modified in the
             following manner. The Agreement Steward reserves the right
             to publish new versions (including revisions) of this
             Agreement from time to time. No one other than the
             Agreement Steward has the right to modify this Agreement.

             IBM is the initial Agreement Steward. IBM may assign the
             responsibility to serve as the Agreement Steward to a
             suitable separate entity. Each new version of the
             Agreement will be given a distinguishing version number.
             The Program (including Contributions) may always be
             distributed subject to the version of the Agreement under
             which it was received. In addition, after a new version of
             the Agreement is published, Contributor may elect to
             distribute the Program (including its Contributions) under
             the new version. Except as expressly stated in Sections
             2(a) and 2(b) above, Recipient receives no rights or
             licenses to the intellectual property of any Contributor
             under this Agreement, whether expressly, by implication,
             estoppel or otherwise. All rights in the Program not
             expressly granted under this Agreement are reserved.


             This Agreement is governed by the laws of the State of New
             York and the intellectual property laws of the United
             States of America. No party to this Agreement will bring a
             legal action under this Agreement more than one year after
             the cause of action arose. Each party waives its rights to
             a jury trial in any resulting litigation. 



*/

/* (C) COPYRIGHT International Business Machines Corp. 2001          */


#include "pthread.h"

#pragma info(none)
#include "pkcsslotd.h"
#pragma info(restore)

#if !defined(LINUX)
#ifndef _POSIX_THREAD_PROCESS_SHARED
  #error "This platform does not support the process-shared mutex"
#endif /* _POSIX_THREAD_PROCESS_SHARED */
#endif


#if SYSVSEM
#error "Caveat Emptor... this does not work"
#include <sys/ipc.h>
#include <sys/sem.h>
int   Shm_Sem=-1; // system 5 shared memory semaphore...
pthread_mutex_t  semmtx = PTHREAD_MUTEX_INITIALIZER;  // local mutex for semaphore functions...
static struct sembuf xlock_lock[2]={
            0,0,0,
                     0,1,SEM_UNDO
};

static struct sembuf xlock_unlock[1] = {
            0,-1,(IPC_NOWAIT | SEM_UNDO)
};

#endif

#if SPINXPL
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/file.h>
static int xplfd=-1;
#endif

int
CreateXProcLock(void *xpl)
{
#if AIX
#if !defined(PKCS64)
   int err;
   pthread_mutex_t  *pmtx = (pthread_mutex_t *)xpl;
  /* Initialize the attributes object */
  if ( (err = pthread_mutexattr_init(&mtxattr)) != 0 ) { 
    DbgLog(DL0,"InitializeMutexes: pthread_mutexattr_init() failed - returned %#x\n", err);
    return FALSE;
  }

  /* Set the attribute variable so that mutexes created with it can be shared across processes */
  if ( (err = pthread_mutexattr_setpshared( &mtxattr, PTHREAD_PROCESS_SHARED )) != 0 ) {
    DbgLog(DL0,"InitializeMutexes: pthread_mutexattr_setpshared() failed - returned %#x\n", err);
    return FALSE;
  }

  /* Initialize the global shared memory mutex */
  if ( (err = pthread_mutex_init(pmtx,&mtxattr)) != 0 ) {
    DbgLog(DL0,"InitializeMutexes: pthread_mutex_init() failed.  returned %#x\n", err);
    return FALSE;
  }
#else
  msemaphore  *psem = (msemaphore *)xpl;
  if ( msem_init(psem,0) == NULL ) {
    DbgLog(DL0,"InitializeMutexes: msem_init() failed.  returned NULL\n");
    return FALSE;
  }
#endif
#elif (PTHREADXPL)
   int err;
   pthread_mutex_t  *pmtx = (pthread_mutex_t *)xpl;
  /* Initialize the attributes object */
  if ( (err = pthread_mutexattr_init(&mtxattr)) != 0 ) { 
    DbgLog(DL0,"InitializeMutexes: pthread_mutexattr_init() failed - returned %#x\n", err);
    return FALSE;
  }

  /* Set the attribute variable so that mutexes created with it can be shared across processes */
  if ( (err = pthread_mutexattr_setpshared( &mtxattr, PTHREAD_PROCESS_SHARED )) != 0 ) {
    DbgLog(DL0,"InitializeMutexes: pthread_mutexattr_setpshared() failed - returned %#x\n", err);
    return FALSE;
  }

  /* Initialize the global shared memory mutex */
  if ( (err = pthread_mutex_init(pmtx,&mtxattr)) != 0 ) {
    DbgLog(DL0,"InitializeMutexes: pthread_mutex_init() failed.  returned %#x\n", err);
    return FALSE;
  }

#elif (POSIXSEM)
#error "this won't work since these are really the AIX calls.."

#elif (SPINXPL)
  
 xplfd = open (XPL_FILE,O_CREAT|O_RDWR,S_IRWXU|S_IRWXG|S_IRWXO);

#elif (SYSVSEM)
#error "Caveat Emptor... this does not work"

//#error  "Define XPL fcns for SYSTEM V Semaphores"
  key_t  tok;

  //  This really needs some work... since we need to differentiate between
  //  the various Xprocess locks which may exist... However at this time
  //  we know there is only one so we will just instantiate it as a global...
  //  The other calls will ingnore thei9r parameters for  SysV sems

   tok = ftok(TOK_PATH ,'b');
DbgLog(DL0,"creating semaphore %x \n",tok);
   pthread_mutex_lock (&semmtx);
   if ( (Shm_Sem = semget(tok,1,IPC_CREAT | 0666)) < 0 ) {

      DbgLog(DL0,"creating semaphore check for existing \n");
      if (errno == EEXIST) {
         if ((Shm_Sem = semget(tok,0,0)) < 0) {
            DbgLog(DL0,"Failed to get semaphore for Xprocess locking \n ");
            pthread_mutex_unlock (&semmtx);
            return FALSE;
         }
      } else {
         DbgLog(DL0,"Failed to get semaphore for Xprocess locking error not eexist \n ");
         pthread_mutex_unlock(&semmtx);
         return FALSE;
      }
   }
   pthread_mutex_unlock(&semmtx);
   DbgLog(DL0,"Semid = %d \n",Shm_Sem);
   return TRUE;
   
#elif NOXPROCLOCK
return TRUE;
#else
#error  "Define XPL fcns"
#endif

  return TRUE;
}

int
DestroyXProcLock(void *xpl)
{
#if AIX
#if defined(PKCS64)
  return msem_remove((xpl));
#else
  /* Destroy the global shared memory mutex */
  pthread_mutex_destroy((xpl));

  /* Destroy the attribute object used to create all the mutexes */
  pthread_mutexattr_destroy( &mtxattr );
  return TRUE;
#endif
#elif (PTHREADXPL)
  /* Destroy the global shared memory mutex */
  pthread_mutex_destroy((xpl));

  /* Destroy the attribute object used to create all the mutexes */
  pthread_mutexattr_destroy( &mtxattr );
  return TRUE;
#elif (POSIXSEM)
#error "this won't work since these are really the AIX calls.."
#elif SYSVSEM
#error "Caveat Emptor... this does not work"

//error  "Define XPL fcns" 
   pthread_mutex_lock(&semmtx);
   semctl(Shm_Sem,1,IPC_RMID,0);
   pthread_mutex_unlock(&semmtx);
   return TRUE;
#elif NOXPROCLOCK
return TRUE;
#elif SPINXPL
return TRUE;
#else
#error  "Define XPL fcns"
#endif
}

int
XProcLock(void *xpl)
{
#if AIX
#if defined(PKCS64)
  return msem_lock(xpl, 0 );
#else
  return pthread_mutex_lock((xpl));
#endif
#elif (PTHREADXPL)
  return pthread_mutex_lock((xpl));
#elif (POSIXSEM)
#error "this won't work since these are really the AIX calls.."
#elif SYSVSEM
#error "Caveat Emptor... this does not work"

//#error  "Define XPL fcns"
   pthread_mutex_lock(&semmtx);
   semop(Shm_Sem,&xlock_lock[0],2);
   pthread_mutex_unlock(&semmtx);
   return TRUE;
#elif NOXPROCLOCK
return TRUE;
#elif SPINXPL 
   flock(xplfd,LOCK_EX);
   return TRUE;
#else
#error  "Define XPL fcns"
#endif
}

int
XProcUnLock(void *xpl)
{
#if AIX
#if defined(PKCS64)
  return msem_unlock((xpl),0);
#else
  return pthread_mutex_unlock((xpl));
#endif
#elif (PTHREADXPL)
  return pthread_mutex_unlock((xpl));
#elif (POSIXSEM)
#error "this won't work since these are really the AIX calls.."
#elif SYSVSEM
#error "Caveat Emptor... this does not work"

//#error  "Define XPL fcns"
   pthread_mutex_lock(&semmtx);
   semop(Shm_Sem,&xlock_unlock[0],1);
   pthread_mutex_unlock(&semmtx);
   return TRUE;
#elif NOXPROCLOCK
return TRUE;
#elif SPINXPL
   flock(xplfd,LOCK_UN);
   return TRUE;
#else
#error  "Define XPL fcns"
#endif
}
/*********************************************************************************
 *
 * InitializeMutexes -
 * 
 *   Initializes the global shared memory mutex, and sets up mtxattr,
 *   the attribute identifier used to create all the per-process mutexes
 * 
 *********************************************************************************/

int InitializeMutexes ( void ) {

  int err;

#if 1
  if ( (err = CreateXProcLock(&(shmp->slt_mutex))) != TRUE){
    DbgLog(DL0,"InitializeMutexes: CreateXProcLock() failed - returned %#x\n", err);
    return FALSE;
  }
#else
#if  !defined(PKCS64)

  /* Initialize the attributes object */
  if ( (err = pthread_mutexattr_init(&mtxattr)) != 0 ) { 
    DbgLog(DL0,"InitializeMutexes: pthread_mutexattr_init() failed - returned %#x\n", err);
    return FALSE;
  }

  /* Set the attribute variable so that mutexes created with it can be shared across processes */
  if ( (err = pthread_mutexattr_setpshared( &mtxattr, PTHREAD_PROCESS_SHARED )) != 0 ) {
    DbgLog(DL0,"InitializeMutexes: pthread_mutexattr_setpshared() failed - returned %#x\n", err);
    return FALSE;
  }

  /* Initialize the global shared memory mutex */
  if ( (err = pthread_mutex_init(&(shmp->slt_mutex),&mtxattr)) != 0 ) {
    DbgLog(DL0,"InitializeMutexes: pthread_mutex_init() failed.  returned %#x\n", err);
    return FALSE;
  }

#elif AIX

  /* Initialize the global shared memory mutex */
  if ( msem_init(&(shmp->slt_mutex),0) == NULL ) {
    DbgLog(DL0,"InitializeMutexes: pthread_mutex_init() failed.  returned NULL\n");
    return FALSE;
  }
#elif LINUX 
#error " Linux Needs the XPROC lock stuff defined"
#endif
#endif
   

  #if TEST_COND_VARS
    if ( ! InitializeConditionVariables() ) {
      return FALSE;
    }
  #endif /* TEST_COND_VARS */

  return TRUE;

}



#if TEST_COND_VARS

  BOOL InitializeConditionVariables ( void ) {
  
    int err;

    if ( (err = pthread_condattr_init( &(shmp->shmem_cv_attr) ) ) != 0 ) {
      DbgLog(DL0,"InitializeConditionVariables: pthread_condattr_init returned %s (%d; %#x)\n", SysConst(err), err, err);
      return FALSE;
    }

#if !defined(LINUX)
    if ( (err = pthread_condattr_setpshared ( &(shmp->shmem_cv_attr), PTHREAD_PROCESS_SHARED ) ) != 0 ) { 
    /* if ( (err = pthread_condattr_setpshared ( &(shmp->shmem_cv_attr), PTHREAD_PROCESS_PRIVATE ) ) != 0 ) { */
      DbgLog(DL0,"InitializeConditionVariables: pthread_condattr_setpshared returned %s (%d; %#x)\n", SysConst(err), err, err);
      return FALSE;
    }
#endif

    if ( (err = pthread_cond_init( &(shmp->shmem_cv), &(shmp->shmem_cv_attr) ) ) != 0 ) {
      DbgLog(DL0,"InitializeConditionVariables: pthread_cond_init returned %s (%d; %#x)\n", SysConst(err), err, err);
      return FALSE;
    }

    if ( (err = pthread_mutex_init( &(shmp->shmem_cv_mutex), &mtxattr ) ) != 0 ) {
      DbgLog(DL0,"InitializeConditionVariables: pthread_mutex_init returned %s (%d; %#x)\n", SysConst(err), err, err);
      return FALSE;
    }

    return TRUE;

  }




  BOOL DestroyConditionVariables ( void ) {

    int err;

    if ( (err = pthread_mutex_destroy ( &(shmp->shmem_cv_mutex) ) ) != 0 ) {
      DbgLog(DL0,"DestroyConditionVariables: pthread_mutex_destroy returned %s (%d; %#x)\n", SysConst(err), err, err);
      return FALSE;
    }

    if ( (err = pthread_cond_destroy( &(shmp->shmem_cv) ) ) != 0 ) {
      DbgLog(DL0,"DestroyConditionVariables: pthread_cond_destroy returned %s (%d; %#x)\n", SysConst(err), err, err);
      return FALSE;
    }

    if ( (err = pthread_condattr_destroy( &(shmp->shmem_cv_attr) ) ) != 0 ) {
      DbgLog(DL0,"DestroyConditionVariables: pthread_condattr_destroy returned %s (%d; %#x)\n", SysConst(err), err, err);
      return FALSE;
    }

    return TRUE;

  }


#endif /* TEST_COND_VARS */





/***********************************************************************
 *   DestroyMutexes -
 * 
 *   Destroys all the mutexes used by the program
 * 
 ***********************************************************************/

int DestroyMutexes ( void ) {

  int i;

  /* Get the global shared memory mutex */
#if 1
  XProcLock(&(shmp->slt_mutex));
#else
#ifdef PKCS64
  msem_lock(&(shmp->slt_mutex), 0 );
#else
  pthread_mutex_lock(&(shmp->slt_mutex));
#endif
#endif


  #if TEST_COND_VARS
    if ( ! DestroyConditionVariables() ) {
      return FALSE;
    }
  #endif /* TEST_COND_VARS */


#ifdef FIXME
    //  SAB  FIXME... This is really useless as we don't use the 
    //  per process mutexes on the shared memory... thank goodness, since
    //  this would have complicated the linux port as it does not support
    //  Process  shared mutexes
    //  of course when we want to use these mutexes we need to figure out
    //  how to handle it in linux... 
  /* Destroy the per-process mutexes */
  for ( i = 0; i < NUMBER_PROCESSES_ALLOWED; i++ ) {
    /* Should I get and release the per-process mutexes here? */

    /* 
       No.  The only way this'll get called is if no processes are currently attached to the slotmgr
       So, in theory, noone should be holding a mutex - if they are, it's in error
     */
    /* FIXME: Should make sure that they were successfully created before destroying them */

#ifdef PKCS64
    msem_remove(&(shmp->proc_table[i].proc_mutex));
#else
    pthread_mutex_destroy( &(shmp->proc_table[i].proc_mutex) );
#endif

  }
#endif

  /* Give up the global shared memory mutex */
  /* (we have to release it before we destroy it, otherwise the behavior's undefined) */


#if 1
  XProcUnLock(&(shmp->slt_mutex));
  DestroyXProcLock(&(shmp->slt_mutex));
#else
#ifdef PKCS64
  msem_unlock(&(shmp->slt_mutex),0);

  /* Destroy the global shared memory mutex */
  msem_remove(&(shmp->slt_mutex));

#else
  pthread_mutex_unlock(&(shmp->slt_mutex));

  /* Destroy the global shared memory mutex */
  pthread_mutex_destroy(&(shmp->slt_mutex));

  /* Destroy the attribute object used to create all the mutexes */
  pthread_mutexattr_destroy( &mtxattr );

#endif
#endif


  return TRUE;

}